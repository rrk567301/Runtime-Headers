@class PHAsset, NSURL, NSArray;

@interface MADServicePhotosVideoAsset : MADServiceVideoAsset {
    PHAsset *_photosAsset;
    NSURL *_downloadedVideoURL;
    NSArray *_resources;
}

- (unsigned long long)assetType;
- (id)identifier;
- (id)url;
- (id)resources;
- (void).cxx_destruct;
- (short)videoSensitivityAnalysisVersion;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })trimTimeRange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stillTime;
- (int)_downloadAssetResourceURLWithCancelBlock:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (id)animatedStickerScore;
- (id)cachedSensitivity;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (BOOL)isSharedPhotosAsset;
- (void)persistToPhotosWithCompactSCSensitivityAnalysis:(long long)a0 screenTimeDeviceImageSensitivity:(short)a1;
- (id)safetyScoresForLabels;
- (id)videoURLWithAllowDownload:(BOOL)a0 progressHandler:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end
