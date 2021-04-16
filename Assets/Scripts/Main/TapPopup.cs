using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using savedata;
using savemethod;

public class TapPopup : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    // オフィス1
    public void OnTapPopupOne()
    {
        OnTapPopup(0);
    }

    // オフィス2
    public void OnTapPopupTwo()
    {
        OnTapPopup(1);
    }

    // オフィス3
    public void OnTapPopupThree()
    {
        OnTapPopup(2);
    }

    // オフィス4
    public void OnTapPopupFour()
    {
        OnTapPopup(3);
    }

    // オフィス5
    public void OnTapPopupFive()
    {
        OnTapPopup(4);
    }

    // オフィス6
    public void OnTapPopupSix()
    {
        OnTapPopup(5);
    }

    // タップ時の処理
    public void OnTapPopup(int channelnumber)
    {
        saveData = saveMethod.Load();

        // チャンネルが存在すれば蓄積時間を計算
        for (int i = 0; i < 6; i++)
        {
            // 自チャンネル以外
            if (i != channelnumber)
            {
                if (saveData.Id[i] != 0)
                {
                    saveData.Accumulation[i] += saveData.Frequency[channelnumber] - saveData.Accumulation[channelnumber]; // (配信頻度 - 蓄積時間) =他の蓄積時間
                    Debug.Log(saveData.Accumulation[i]);
                }
            }
        }

        saveData.Accumulation[channelnumber] = 0.0; // 自チャンネルの蓄積時間をゼロに
        saveData.ActiveCounter[channelnumber] = 1; // アクティブカウンターをアクティブ(1)に

        saveMethod.Save(saveData);

        SceneManager.LoadScene("Broadcast");
    }
}
