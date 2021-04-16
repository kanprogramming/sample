using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using savedata;
using savemethod;

public class Date : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    private double timer = 0.0; // 加算時間
    const double border = 2.0; // ベースの時間

    // テキスト
    public Text yearText;
    public Text monthText;
    public Text weekText;

    void Start()
    {

    }

    void Update()
    {
        saveData = saveMethod.Load();

        // 年月週表示
        yearText.text = saveData.Year.ToString();
        monthText.text = saveData.Month.ToString();
        weekText.text = saveData.Week.ToString();
        
        timer += Time.deltaTime;
        // Debug.Log(timer);

        // ベースの時間と年月週を更新してセーブ    
        if (timer >= border)
        {
            saveData.NowTime += border;
            saveData.Week += 1;

            // 一定の年月週で値を更新
            if (saveData.Week == 5) // 5週目で月+1 週→1
            {
                saveData.Month += 1;
                saveData.Week = 1;

                if (saveData.Month == 13) // 13月→1月
                {
                    saveData.Month = 1;
                }
                else if (saveData.Month == 4) // 4月1週→エンディングへ
                {
                    // 年度末イベント発生
                    SceneManager.LoadScene("Ending");
                }
            }

            saveMethod.Save(saveData);
            
            // タイマーの初期化
            timer = 0.0;
        }
    }
}
