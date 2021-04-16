using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using savedata;
using savemethod;
using constdata;
using constmethod;

public class Ranking : MonoBehaviour
{
    SaveData saveData = new SaveData();
    SaveMethod saveMethod = new SaveMethod();
    ConstData constData = new ConstData();
    ConstMethod constMethod = new ConstMethod();

    // リスト宣言
    private List<double> subscriberList = new List<double>();

    // テキスト
    public Text channelText_One;
    public Text subscriberText_One;
    public Text channelText_Two;
    public Text subscriberText_Two;
    public Text channelText_Three;
    public Text subscriberText_Three;
    public Text channelText_Four;
    public Text subscriberText_Four;
    public Text channelText_Five;
    public Text subscriberText_Five;
    public Text channelText_Six;
    public Text subscriberText_Six;
    public Text channelText_Seven;
    public Text subscriberText_Seven;
    public Text channelText_Eight;
    public Text subscriberText_Eight;
    public Text channelText_Nine;
    public Text subscriberText_Nine;
    public Text channelText_Ten;
    public Text subscriberText_Ten;

    // 画像
    public Image channelBoxOne;
    public Image channelBoxTwo;
    public Image channelBoxThree;
    public Image channelBoxFour;
    public Image channelBoxFive;
    public Image channelBoxSix;
    public Image channelBoxSeven;
    public Image channelBoxEight;
    public Image channelBoxNine;
    public Image channelBoxTen;
    
    void Start()
    {
        saveData = saveMethod.Load();
        constData = constMethod.Load();

        int element = 0; // 自ライバーの数

        // Listに全て格納
        AddList(ref subscriberList, ref element, constData, saveData); // if: readonly out: write ref: both

        // ソート
        subscriberList.Sort();
        subscriberList.Reverse();
        
        // ランキング表示
        DisplayRanking(subscriberList, element);

        subscriberList.Clear(); // Listの消去
    }

    // リストに格納する関数
    public void AddList(ref List<double> subscriberList, ref int element, ConstData constData, SaveData saveData)
    {
        // 年度によって他ライバーデータ格納
        switch (saveData.Year)
        {
            case 1:
                subscriberList.AddRange(constData.Subscriber_one);
                break;
            case 2:
                subscriberList.AddRange(constData.Subscriber_two);
                break;
            case 3:
                subscriberList.AddRange(constData.Subscriber_three);
                break;
            case 4:
                subscriberList.AddRange(constData.Subscriber_four);
                break;
            case 5:
                subscriberList.AddRange(constData.Subscriber_five);
                break;
            case 6:
                subscriberList.AddRange(constData.Subscriber_six);
                break;
            case 7:
                subscriberList.AddRange(constData.Subscriber_seven);
                break;
            case 8:
                subscriberList.AddRange(constData.Subscriber_eight);
                break;
            case 9:
                subscriberList.AddRange(constData.Subscriber_nine);
                break;
            case 10:
                subscriberList.AddRange(constData.Subscriber_ten);
                break;
            case 11:
                subscriberList.AddRange(constData.Subscriber_eleven);
                break;
            case 12:
                subscriberList.AddRange(constData.Subscriber_twelve);
                break;
            default:
                Debug.Log("Over Year /Ranking");
                break;
        }

        // 自ライバーデータ格納
        for (int i = 0; i < 6; i++)
        {
            // 非0=所属ライバーのみ
            if (saveData.Id[i] != 0)
            {
                subscriberList.Add(saveData.Subscriber[i]);
                element++;
            }
        }
    }

    // ランキング表示する関数
    public void DisplayRanking(List<double> subscriberlist, int element)
    {
        saveData = saveMethod.Load();

        int countRank = 0; // 順位を記録する

        // 年度ごとに他ライバーデータと比較、表示
        switch (saveData.Year)
        {
            case 1:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_one[k])
                        {
                            DisplayIndividual(constData.ChannelName_one[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 2:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_two[k])
                        {
                            DisplayIndividual(constData.ChannelName_two[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 3:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_three[k])
                        {
                            DisplayIndividual(constData.ChannelName_three[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 4:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_four[k])
                        {
                            DisplayIndividual(constData.ChannelName_four[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 5:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_five[k])
                        {
                            DisplayIndividual(constData.ChannelName_five[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 6:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_six[k])
                        {
                            DisplayIndividual(constData.ChannelName_six[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 7:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_seven[k])
                        {
                            DisplayIndividual(constData.ChannelName_seven[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 8:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_eight[k])
                        {
                            DisplayIndividual(constData.ChannelName_eight[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 9:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_nine[k])
                        {
                            DisplayIndividual(constData.ChannelName_nine[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 10:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_ten[k])
                        {
                            DisplayIndividual(constData.ChannelName_ten[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 11:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_eleven[k])
                        {
                            DisplayIndividual(constData.ChannelName_eleven[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            case 12:
                for (int i = 0; i < 10; i++)
                {
                    // 他ライバーデータを検索
                    for (int k = 0; k < 10; k++)
                    {
                        if (subscriberlist[i] == constData.Subscriber_twelve[k])
                        {
                            DisplayIndividual(constData.ChannelName_twelve[k], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる
                        }
                    }

                    // 自ライバーデータを検索
                    for (int j = 0; j < element; j++)
                    {
                        if (subscriberlist[i] == saveData.Subscriber[j])
                        {
                            DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);

                            countRank++; // 順位を一つ上げる   
                        }
                    }
                }
                break;
            default:
                Debug.Log("Error/Ranking/RankingDisplay");
                break;
        }
    }

    // 個々の表示(他ライバー)
    public void DisplayIndividual(string name, double subscriber, int count)
    {
        switch (count)
        {
            case 0:
                channelText_One.text = name;
                subscriberText_One.text = subscriber.ToString();
                break;
            case 1:
                channelText_Two.text = name;
                subscriberText_Two.text = subscriber.ToString();
                break;
            case 2:
                channelText_Three.text = name;
                subscriberText_Three.text = subscriber.ToString();
                break;
            case 3:
                channelText_Four.text = name;
                subscriberText_Four.text = subscriber.ToString();
                break;
            case 4:
                channelText_Five.text = name;
                subscriberText_Five.text = subscriber.ToString();
                break;
            case 5:
                channelText_Six.text = name;
                subscriberText_Six.text = subscriber.ToString();
                break;
            case 6:
                channelText_Seven.text = name;
                subscriberText_Seven.text = subscriber.ToString();
                break;
            case 7:
                channelText_Eight.text = name;
                subscriberText_Eight.text = subscriber.ToString();
                break;
            case 8:
                channelText_Nine.text = name;
                subscriberText_Nine.text = subscriber.ToString();
                break;
            case 9:
                channelText_Ten.text = name;
                subscriberText_Ten.text = subscriber.ToString();
                break;
            default:
                Debug.Log("Error/Ranking/DisplayIndividual()");
                break;
        }
    }

    // 個々の表示(自ライバー)
    public void DisplayIndividualMine(string name, double subscriber, int count)
    {
        switch (count)
        {
            case 0:
                channelText_One.text = name;
                subscriberText_One.text = subscriber.ToString();
                channelBoxOne.color = Color.yellow;
                break;
            case 1:
                channelText_Two.text = name;
                subscriberText_Two.text = subscriber.ToString();
                channelBoxTwo.color = Color.yellow;
                break;
            case 2:
                channelText_Three.text = name;
                subscriberText_Three.text = subscriber.ToString();
                channelBoxThree.color = Color.yellow;
                break;
            case 3:
                channelText_Four.text = name;
                subscriberText_Four.text = subscriber.ToString();
                channelBoxFour.color = Color.yellow;
                break;
            case 4:
                channelText_Five.text = name;
                subscriberText_Five.text = subscriber.ToString();
                channelBoxFive.color = Color.yellow;
                break;
            case 5:
                channelText_Six.text = name;
                subscriberText_Six.text = subscriber.ToString();
                channelBoxSix.color = Color.yellow;
                break;
            case 6:
                channelText_Seven.text = name;
                subscriberText_Seven.text = subscriber.ToString();
                channelBoxSeven.color = Color.yellow;
                break;
            case 7:
                channelText_Eight.text = name;
                subscriberText_Eight.text = subscriber.ToString();
                channelBoxEight.color = Color.yellow;
                break;
            case 8:
                channelText_Nine.text = name;
                subscriberText_Nine.text = subscriber.ToString();
                channelBoxNine.color = Color.yellow;
                break;
            case 9:
                channelText_Ten.text = name;
                subscriberText_Ten.text = subscriber.ToString();
                channelBoxTen.color = Color.yellow;
                break;
            default:
                Debug.Log("Error/Ranking/DisplayIndividual()");
                break;
        }
    }
}
