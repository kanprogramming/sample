using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using savedata;
using savemethod;

public class Broadcast : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();

    void Awake()
    {
        // // (スタート画面での処理)
        // saveMethod.Save(saveData);
    }

    void Start()
    {
        
    }

    void Update()
    {
        
    }
}
