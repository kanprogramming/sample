using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace savedata
{
    public class SaveData
    {
        private double nowTime = 0.0; // 現在の時間
        public double NowTime
        {
            get {return nowTime;}
            set {nowTime = value;}
        }

        private int year = 1; // 年
        public int Year
        {
            get {return year;}
            set {year = value;}
        }

        private int month = 4; // 月
        public int Month
        {
            get {return month;}
            set {month = value;}
        }

        private int week = 1; // 週
        public int Week
        {
            get {return week;}
            set {week = value;}
        }

        // ---------- チャンネルデータ ----------
        private int[] id = {1, 2, 3, 4, 5, 6}; // ID
        public int[] Id
        {
            get {return id;}
            set {id = value;}
        }

        private string[] channelName = {"Sample Channel", "", "", "", "", ""}; // チャンネル名
        public string[] ChannelName
        {
            get {return channelName;}
            set {channelName = value;}
        }

        private double[] subscriber = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
        public double[] Subscriber
        {
            get {return subscriber;}
            set {subscriber = value;}
        }

        private double[] design = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // キャラクターデザイン
        public double[] Design
        {
            get {return design;}
            set {design = value;}
        }

        private double[] frequency = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0}; // 配信頻度
        public double[] Frequency
        {
            get {return frequency;}
            set {frequency = value;}
        }

        private double[] talk = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // トーク力
        public double[] Talk
        {
            get {return talk;}
            set {talk = value;}
        }

        private double[] plan = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // 企画力
        public double[] Plan
        {
            get {return plan;}
            set {plan = value;}
        }

        private double[] sing = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // 歌唱力
        public double[] Sing
        {
            get {return sing;}
            set {sing = value;}
        }

        private double[] exp = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // 経験値
        public double[] Exp
        {
            get {return exp;}
            set {exp = value;}
        }

        private int[] activeCounter = {0, 0, 0, 0, 0, 0}; // アクティブカウンター
        public int[] ActiveCounter
        {
            get {return activeCounter;}
            set {activeCounter = value;}
        }

        private double[] accumulation = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネルごとの蓄積時間
        public double[] Accumulation
        {
            get {return accumulation;}
            set {accumulation = value;}
        }
    }
}
