using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using commentdata;
using commentmethod;

public class Comment : MonoBehaviour
{
    CommentData commentData = new CommentData();
    CommentMethod commentMethod = new CommentMethod();

    // テキスト
    public Text comment_one;
    public Text comment_two;
    public Text comment_three;
    public Text comment_four;
    public Text comment_five;

    // アイコン
    public Image commentIcon_one;
    public Image commentIcon_two;
    public Image commentIcon_three;
    public Image commentIcon_four;
    public Image commentIcon_five;

    // スプライト
    public Sprite[] commentIcon;

    private double timer = 0.0; // 時間
    private double border = 0.8; // コメントが流れる速度
    private int commentElement = 0; // コメント配列の開始位置要素
    private int borderElement = 20; // コメントの要素数の上限(borderElement+4)
    private int commentRandom = 0; // コメント用の乱数
    private int commentDataMax = 8; // コメントデータの数(commentDataMax-1個)

    void Awake()
    {
        // (スタート画面での処理)
        commentMethod.Save(commentData);
    }

    void Start()
    {
        comment_one.text = "";
        comment_two.text = "";
        comment_three.text = "";
        comment_four.text = "";
        comment_five.text = "";

        // コメント用の乱数を生成
        Random.InitState(System.DateTime.Now.Millisecond);
        commentRandom = Random.Range(1, commentDataMax); // 1 ~ commentDataMax-1までの乱数を生成
        Debug.Log("Comment/Start/commentRandom:"+commentRandom);
    }

    void Update()
    {
        timer += Time.deltaTime;

        // 一定時間経過でコメント更新
        if (timer >= border * 5) {
            DisplayComment(commentElement+4, commentRandom);
            timer = 0.0;
            commentElement += 5;
                if (commentElement == borderElement)
                {
                    // 一定時間後リザルト画面へ
                    commentElement = 0;
                    SceneManager.LoadScene("ResultBroadcast");
                }
        }
        else if (timer >= border * 4) DisplayComment(commentElement+3, commentRandom);
        else if (timer >= border * 3) DisplayComment(commentElement+2, commentRandom);
        else if (timer >= border * 2) DisplayComment(commentElement+1, commentRandom);
        else if (timer >= border) DisplayComment(commentElement, commentRandom);
    }

    // コメントを表示する
    public void DisplayComment(int i, int commentrandom)
    {
        commentData = commentMethod.Load();

        switch (commentRandom)
        {
            case 1:
                comment_one.text = commentData.Commentdata_one[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_one[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_one[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_one[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_one[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 2:
                comment_one.text = commentData.Commentdata_two[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_two[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_two[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_two[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_two[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 3:
                comment_one.text = commentData.Commentdata_three[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_three[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_three[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_three[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_three[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 4:
                comment_one.text = commentData.Commentdata_four[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_four[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_four[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_four[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_four[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 5:
                comment_one.text = commentData.Commentdata_five[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_five[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_five[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_five[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_five[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 6:
                comment_one.text = commentData.Commentdata_six[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_six[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_six[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_six[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_six[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            case 7:
                comment_one.text = commentData.Commentdata_seven[i+4];
                commentIcon_one.sprite = commentIcon[i+4];
                comment_two.text = commentData.Commentdata_seven[i+3];
                commentIcon_two.sprite = commentIcon[i+3];
                comment_three.text = commentData.Commentdata_seven[i+2];
                commentIcon_three.sprite = commentIcon[i+2];
                comment_four.text = commentData.Commentdata_seven[i+1];
                commentIcon_four.sprite = commentIcon[i+1];
                comment_five.text = commentData.Commentdata_seven[i];
                commentIcon_five.sprite = commentIcon[i];
                break;
            default:
                Debug.Log("Comment/DisplayComment/switch");
                break;
        }
    }
}
