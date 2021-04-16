using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using commentdata;

namespace commentmethod
{
    public class CommentMethod
    {
        // ラップ用の変数
        [SerializeField]
        private string[] commentdata_one = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_two = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_three = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_four = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_five = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_six = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private string[] commentdata_seven = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};

        // セーブ
        public void Save(CommentData commentData)
        {
            CommentMethod data = new CommentMethod();

            // セーブデータ代入
            data.commentdata_one = commentData.Commentdata_one;
            data.commentdata_two = commentData.Commentdata_two;
            data.commentdata_three = commentData.Commentdata_three;
            data.commentdata_four = commentData.Commentdata_four;
            data.commentdata_five = commentData.Commentdata_five;
            data.commentdata_six = commentData.Commentdata_six;
            data.commentdata_seven = commentData.Commentdata_seven;

            // jsonに書き出し
            StreamWriter writer;
            string jsonData = JsonUtility.ToJson(data);
            writer = new StreamWriter(Application.persistentDataPath + "/commentdata.json", false); // trueで追記、falseで上書き
            writer.Write(jsonData);
            writer.Flush();
            writer.Close();
        }

        // ロード
        public CommentData Load()
        {
            CommentMethod data = new CommentMethod();
            string readdata = "";

            // jsonから読み込み
            StreamReader reader;
            reader = new StreamReader(Application.persistentDataPath + "/commentdata.json");
            readdata = reader.ReadToEnd();
            reader.Close();
            data = JsonUtility.FromJson<CommentMethod>(readdata);

            CommentData commentData = new CommentData();

            // ロードデータ代入
            commentData.Commentdata_one = data.commentdata_one;
            commentData.Commentdata_two = data.commentdata_two;
            commentData.Commentdata_three = data.commentdata_three;
            commentData.Commentdata_four = data.commentdata_four;
            commentData.Commentdata_five = data.commentdata_five;
            commentData.Commentdata_six = data.commentdata_six;
            commentData.Commentdata_seven = data.commentdata_seven;


            return commentData;
        }

        // データ削除
        public void Delete()
        {
            System.IO.File.Delete(Application.persistentDataPath + "/commentdata.json");
        }
    }
}
