using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using savedata;
using savemethod;

public class Liver : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    private int element = 0; // アクティブなチャンネルの要素

    // ライバー
    public GameObject liver_one;
    public GameObject liver_two;
    public GameObject liver_three;
    public GameObject liver_four;
    public GameObject liver_five;
    public GameObject liver_six;

    void Start()
    {
        saveData = saveMethod.Load();

        liver_one.SetActive(false);
        liver_two.SetActive(false);
        liver_three.SetActive(false);
        liver_four.SetActive(false);
        liver_five.SetActive(false);
        liver_six.SetActive(false);

        // アクティブカウンターが1である要素を取得
        element = GetActiveLiverElement(saveData.ActiveCounter);

        // 要素に応じてライバーを表示
        DisplayLiver(element);
    }

    // アクティブカウンターが1である要素を取得
    public int GetActiveLiverElement(int[] activecounter)
    {
        int ele;

        for (int i = 0; i < 6; i++)
        {
            if (activecounter[i] == 1)
            {
                ele = i;
                return ele;
            } 
        }

        Debug.Log("Error/GetActiveLiverElement");
        return 100;
    }

    // 要素に応じてライバーを表示
    public void DisplayLiver(int element)
    {
        switch(element)
        {
            case 0:
                liver_one.SetActive(true);
                break;
            case 1:
                liver_two.SetActive(true);
                break;
            case 2:
                liver_three.SetActive(true);
                break;
            case 3:
                liver_four.SetActive(true);
                break;
            case 4:
                liver_five.SetActive(true);
                break;
            case 5:
                liver_six.SetActive(true);
                break;
            default:
                Debug.Log("Liver/DisplayLiver");
                break;
        }
    }

}
