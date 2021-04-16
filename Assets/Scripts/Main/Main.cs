using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using savedata;
using savemethod;
using constdata;
using constmethod;
using commentdata;
using commentmethod;

public class Main : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();
    ConstData constData = new ConstData();
    ConstMethod constMethod = new ConstMethod();
    CommentData commentData = new CommentData();
    CommentMethod commentMethod = new CommentMethod();

    void Awake()
    {
        // (スタート画面での実装)
        if (System.IO.File.Exists(Application.persistentDataPath + "/savedata.json") == false)
        {
            saveMethod.Save(saveData);
            constMethod.Save(constData);
            commentMethod.Save(commentData);
        }
    }

    void Start()
    {

    }

    void Update()
    {

    }
}
