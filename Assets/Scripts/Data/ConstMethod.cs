using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using constdata;

namespace constmethod
{
    public class ConstMethod
    {
        // ラップ用の変数
        // 1年目
        [SerializeField]
        private int[] id_one = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_one = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_one = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 2年目
        [SerializeField]
        private int[] id_two = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        [SerializeField]
        private string[] channelName_two = {"", "", "", "", "", "", "", "", "", ""};
        [SerializeField]
        private double[] subscriber_two = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

        // 3年目
        [SerializeField]
        private int[] id_three = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_three = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_three = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 4年目
        [SerializeField]
        private int[] id_four = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_four = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_four = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 5年目
        [SerializeField]
        private int[] id_five = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_five = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_five = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 6年目
        [SerializeField]
        private int[] id_six = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_six = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_six = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 7年目
        [SerializeField]
        private int[] id_seven = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_seven = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_seven = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 8年目
        [SerializeField]
        private int[] id_eight = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_eight = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_eight = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 9年目
        [SerializeField]
        private int[] id_nine = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_nine = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_nine = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 10年目
        [SerializeField]
        private int[] id_ten = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_ten = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_ten = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 11年目
        [SerializeField]
        private int[] id_eleven = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_eleven = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_eleven = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数

        // 12年目
        [SerializeField]
        private int[] id_twelve = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
        [SerializeField]
        private string[] channelName_twelve = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
        [SerializeField]
        private double[] subscriber_twelve = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数


        // セーブ
        public void Save(ConstData constData)
        {
            ConstMethod data = new ConstMethod();

            // セーブデータ代入
            // 1年目
            data.id_one = constData.Id_one;
            data.channelName_one = constData.ChannelName_one;
            data.subscriber_one = constData.Subscriber_one;
            // 2年目
            data.id_two = constData.Id_two;
            data.channelName_two = constData.ChannelName_two;
            data.subscriber_two = constData.Subscriber_two;
            // 3年目
            data.id_three = constData.Id_three;
            data.channelName_three = constData.ChannelName_three;
            data.subscriber_three = constData.Subscriber_three;
            // 4年目
            data.id_four = constData.Id_four;
            data.channelName_four = constData.ChannelName_four;
            data.subscriber_four = constData.Subscriber_four;
            // 5年目
            data.id_five = constData.Id_five;
            data.channelName_five = constData.ChannelName_five;
            data.subscriber_five = constData.Subscriber_five;
            // 6年目
            data.id_six = constData.Id_six;
            data.channelName_six = constData.ChannelName_six;
            data.subscriber_six = constData.Subscriber_six;
            // 7年目
            data.id_seven = constData.Id_seven;
            data.channelName_seven = constData.ChannelName_seven;
            data.subscriber_seven = constData.Subscriber_seven;
            // 8年目
            data.id_eight = constData.Id_eight;
            data.channelName_eight = constData.ChannelName_eight;
            data.subscriber_eight = constData.Subscriber_eight;
            // 9年目
            data.id_nine = constData.Id_nine;
            data.channelName_nine = constData.ChannelName_nine;
            data.subscriber_nine = constData.Subscriber_nine;
            // 10年目
            data.id_ten = constData.Id_ten;
            data.channelName_ten = constData.ChannelName_ten;
            data.subscriber_ten = constData.Subscriber_ten;
            // 11年目
            data.id_eleven = constData.Id_eleven;
            data.channelName_eleven = constData.ChannelName_eleven;
            data.subscriber_eleven = constData.Subscriber_eleven;
            // 12年目
            data.id_twelve = constData.Id_twelve;
            data.channelName_twelve = constData.ChannelName_twelve;
            data.subscriber_twelve = constData.Subscriber_twelve;

            // jsonに書き出し
            StreamWriter writer;
            string jsonData = JsonUtility.ToJson(data);
            writer = new StreamWriter(Application.persistentDataPath + "/constdata.json", false); // trueで追記、falseで上書き
            writer.Write(jsonData);
            writer.Flush();
            writer.Close();
        }

        // ロード
        public ConstData Load()
        {
            ConstMethod data = new ConstMethod();
            string readdata = "";

            // jsonから読み込み
            StreamReader reader;
            reader = new StreamReader(Application.persistentDataPath + "/constdata.json");
            readdata = reader.ReadToEnd();
            reader.Close();
            data = JsonUtility.FromJson<ConstMethod>(readdata);

            ConstData constData = new ConstData();

            // ロードデータ代入
            // 1年目
            constData.Id_one = data.id_one;
            constData.ChannelName_one = data.channelName_one;
            constData.Subscriber_one = data.subscriber_one;
            // 2年目
            constData.Id_two = data.id_two;
            constData.ChannelName_two = data.channelName_two;
            constData.Subscriber_two = data.subscriber_two;
            // 3年目
            constData.Id_three = data.id_three;
            constData.ChannelName_three = data.channelName_three;
            constData.Subscriber_three = data.subscriber_three;
            // 4年目
            constData.Id_four = data.id_four;
            constData.ChannelName_four = data.channelName_four;
            constData.Subscriber_four = data.subscriber_four;
            // 5年目
            constData.Id_five = data.id_five;
            constData.ChannelName_five = data.channelName_five;
            constData.Subscriber_five = data.subscriber_five;
            // 6年目
            constData.Id_six = data.id_six;
            constData.ChannelName_six = data.channelName_six;
            constData.Subscriber_six = data.subscriber_six;
            // 7年目
            constData.Id_seven = data.id_seven;
            constData.ChannelName_seven = data.channelName_seven;
            constData.Subscriber_seven = data.subscriber_seven;
            // 8年目
            constData.Id_eight = data.id_eight;
            constData.ChannelName_eight = data.channelName_eight;
            constData.Subscriber_eight = data.subscriber_eight;
            // 9年目
            constData.Id_nine = data.id_nine;
            constData.ChannelName_nine = data.channelName_nine;
            constData.Subscriber_nine = data.subscriber_nine;
            // 10年目
            constData.Id_ten = data.id_ten;
            constData.ChannelName_ten = data.channelName_ten;
            constData.Subscriber_ten = data.subscriber_ten;
            // 11年目
            constData.Id_eleven = data.id_eleven;
            constData.ChannelName_eleven = data.channelName_eleven;
            constData.Subscriber_eleven = data.subscriber_eleven;
            // 12年目
            constData.Id_twelve = data.id_twelve;
            constData.ChannelName_twelve = data.channelName_twelve;
            constData.Subscriber_twelve = data.subscriber_twelve;


            return constData;
        }

        // データ削除
        public void Delete()
        {
            System.IO.File.Delete(Application.persistentDataPath + "/constdata.json");
        }
    }
}
