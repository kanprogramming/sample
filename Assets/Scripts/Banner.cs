using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class Banner : MonoBehaviour
{

    private string gameId = "4064216";
    private string mySurfacingId = "Banner_iOS";
    private bool testMode = true;

    void Awake()
    {
        Advertisement.Initialize(gameId, testMode);
        Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
    }

    void Update()
    {
        Advertisement.Banner.Show(mySurfacingId);
    }
}
