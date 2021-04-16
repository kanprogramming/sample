using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdSample : MonoBehaviour
{

    private string gameId = "4064217";
    private string adUnitAndroidId = "Interstitial_Android";
    private bool testMode = true;

    void Awake()
    {
        Advertisement.Initialize(gameId, testMode);
        Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
    }

    void Update()
    {
        Advertisement.Banner.Show(adUnitAndroidId);
    }

    public void ShowInterstitialAd()
    {
        if (Advertisement.IsReady(adUnitAndroidId))
        {
            Advertisement.Show(adUnitAndroidId);
        }
        else 
        {
            Debug.Log("Error");
        }
    }
}
