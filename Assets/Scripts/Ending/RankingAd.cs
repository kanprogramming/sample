using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;
using savedata;
using savemethod;

public class RankingAd : MonoBehaviour, IUnityAdsListener
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    private string gameId = "4064216";
    private bool testMode = true;
    public string mySurfacingId = "Rewarded_iOS";


    void Start()
    {
        Advertisement.AddListener(this);
        Advertisement.Initialize(gameId, testMode);
    }

    // 画面タップ時
    public void OnTapScreen()
    {
        saveData = saveMethod.Load();

        // 年度の更新
        saveData.Week = 1;
        saveData.Month = 4;
        saveData.Year += 1;

        saveMethod.Save(saveData);

        Advertisement.Show(mySurfacingId);
    }

    // 準備の確認
    public void OnUnityAdsReady(string surfacingId)
    {
        Debug.Log("Ranking/OnUnityAdsReady");
    }

    // 視聴の長さによって分岐
    public void OnUnityAdsDidFinish(string surfacingId, ShowResult showResult)
    {
        if (showResult == ShowResult.Failed)
        {
            Debug.Log("Failed Ranking/OnUnityAdsDidFinish");
        } else {
            SceneManager.LoadScene("Main");
        }
    }

    // エラー
    public void OnUnityAdsDidError(string message)
    {
        Debug.Log("Ranking/OnUnityAdsDidError");
    }

    // 広告開始時に処理したいもの
    public void OnUnityAdsDidStart(string surfacingId)
    {
        Debug.Log("Ranking/OnUnityAdsDidStart");
    }
}
