@interface PHSensitiveContentAnalysisUtility : NSObject

+ (BOOL)_assetNeedsSensitivityProcessing:(id)a0 forThumbnail:(BOOL)a1 forPickerSharing:(BOOL)a2;
+ (BOOL)sensitiveContentAnalysisEnabled;
+ (void)_analyzeUserOwnedAsset:(id)a0;
+ (struct CGImage { } *)_applyLiveTreatment:(struct CGImage { } *)a0;
+ (struct CGImage { } *)_applyStaticTreatment:(struct CGImage { } *)a0;
+ (BOOL)_assetIsEligableForVideoProcessing:(id)a0;
+ (BOOL)_assetNeedsVideoSensitivityProcessing:(id)a0 forPickerSharing:(BOOL)a1;
+ (id)_blurredImage:(id)a0;
+ (id)_clearedImageManagerResultDictionaryWithErrorIfNone:(id)a0 asset:(id)a1 isContentPreviewableForAsset:(BOOL)a2 assetNeedsProcessing:(BOOL)a3 error:(id)a4;
+ (BOOL)_isContentPreviewableForAsset:(id)a0 forPickerSharing:(BOOL)a1 outError:(id *)a2;
+ (void)_obscureImageManagerResultOrThumbnailDataIfSensitive:(id)a0 outResult:(id *)a1 infoDictionary:(id)a2 outInfoDictionary:(id *)a3 forRequestFromAsset:(id)a4 applyLiveBlurIfSensitive:(BOOL)a5 assetNeedsProcessing:(BOOL)a6;
+ (id)_sharedCIContext;
+ (BOOL)_shouldAnalyzeMedia;
+ (BOOL)assetNeedsThumbnailSensitivityProcessing:(id)a0;
+ (BOOL)assetNeedsThumbnailSensitivityProcessingForPickerSharing:(id)a0;
+ (BOOL)assetNeedsVideoSensitivityProcessing:(id)a0;
+ (BOOL)assetNeedsVideoSensitivityProcessingForPickerSharing:(id)a0;
+ (BOOL)isContentPreviewableForAsset:(id)a0 outError:(id *)a1;
+ (BOOL)isContentPreviewableForAssetForPickerSharing:(id)a0 outError:(id *)a1;
+ (void)obscureThumbnailDataIfSensitiveFromThumbnailData:(id)a0 outThumbnailData:(id *)a1 forThumbnailAsset:(id)a2;
+ (void)protectImageManagerResult:(id)a0 outAnimatedImage:(id *)a1 infoDictionary:(id)a2 outInfoDictionary:(id *)a3 forAnimatedImageRequestFromAsset:(id)a4;
+ (void)protectImageManagerResult:(id)a0 outImage:(id *)a1 infoDictionary:(id)a2 outInfoDictionary:(id *)a3 forImageRequestFromAsset:(id)a4 applyLiveBlurIfSensitive:(BOOL)a5;
+ (id)protectImageManagerResult:(id)a0 outVideoItem:(id *)a1 infoDictionary:(id)a2 outInfoDictionary:(id *)a3 forVideoRequestFromAsset:(id)a4 requestAnalysisIfUnprocessed:(BOOL)a5;
+ (long long)randomIntBetween:(long long)a0 upperBound:(long long)a1;
+ (id)sensitivityAnalysisFromAsset:(id)a0 outError:(id *)a1;

@end
