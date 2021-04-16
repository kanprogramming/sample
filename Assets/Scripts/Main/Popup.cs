using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using savedata;
using savemethod;

public class Popup : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    private double timer = 0.0; // 加算時間

    // ポップアップ
    public GameObject popup_one;
    public GameObject popup_two;
    public GameObject popup_three;
    public GameObject popup_four;
    public GameObject popup_five;
    public GameObject popup_six;

    void Start()
    {
        // 開始時は非表示
        popup_one.SetActive(false);
        popup_two.SetActive(false);
        popup_three.SetActive(false);
        popup_four.SetActive(false);
        popup_five.SetActive(false);
        popup_six.SetActive(false);
    }

    void Update()
    {
        saveData = saveMethod.Load();

        timer += Time.deltaTime;

        // チャンネルが存在すれば判定
        if (saveData.Id[0] != 0)
        {
            DisplayPopupOne(saveData);
        }
    
        if (saveData.Id[1] != 0)
        {
            DisplayPopupTwo(saveData);
        }

        if (saveData.Id[2] != 0)
        {
            DisplayPopupThree(saveData);
        }

        if (saveData.Id[3] != 0)
        {
            DisplayPopupFour(saveData);
        }

        if (saveData.Id[4] != 0)
        {
            DisplayPopupFive(saveData);
        }

        if (saveData.Id[5] != 0)
        {
            DisplayPopupSix(saveData);
        }
    }

    // タイマー+蓄積時間が配信頻度を超えていればポップアップを表示
    public void DisplayPopupOne(SaveData savedata)
    {
        if (timer + saveData.Accumulation[0]  >= savedata.Frequency[0])
        {
            popup_one.SetActive(true);
        }
    }

    public void DisplayPopupTwo(SaveData savedata)
    {
        if (timer + saveData.Accumulation[1] >= savedata.Frequency[1])
        {
            popup_two.SetActive(true);
        }
    }

    public void DisplayPopupThree(SaveData savedata)
    {
        if (timer + saveData.Accumulation[2] >= savedata.Frequency[2])
        {
            popup_three.SetActive(true);
        }
    }

    public void DisplayPopupFour(SaveData savedata)
    {
        if (timer + saveData.Accumulation[3] >= savedata.Frequency[3])
        {
            popup_four.SetActive(true);
        }
    }

    public void DisplayPopupFive(SaveData savedata)
    {
        if (timer + saveData.Accumulation[4] >= savedata.Frequency[4])
        {
            popup_five.SetActive(true);
        }
    }

    public void DisplayPopupSix(SaveData savedata)
    {
        if (timer + saveData.Accumulation[5] >= savedata.Frequency[5])
        {
            popup_six.SetActive(true);
        }
    }
}

