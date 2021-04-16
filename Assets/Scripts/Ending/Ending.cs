using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Ending : MonoBehaviour
{
    public Text infomationText;
    private int counter = 0;

    // 画面タップ時
    public void OnTapScreen()
    {
        counter += 1;

        // タップ数によってテキスト変更
        switch (counter)
        {
            case 1:
                infomationText.text = "今年度終了時点で、最もチャンネル登録者数が多かったバーチューバーのランキングが発表されます。";
                break;
            case 2:
                infomationText.text = "果たして、私たちの事務所のバーチューバーはランクインしているのでしょうか・・・。";
                break;
            case 3:
                infomationText.text = "たった今、発表されたようです！早速見てみましょう！";
                break;
            case 4:
                SceneManager.LoadScene("Ranking");
                break;
            default:
                Debug.Log("Error/Infomation.cs");
                break;
        }
    }
}
