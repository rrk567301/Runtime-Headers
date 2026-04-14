@interface HMDCameraClipUploadPosterFrameOperation : HMDCameraClipAppendStreamingAssetOperation

+ (BOOL)shouldRetry;
+ (id)logCategory;
+ (id)streamingAssetPropertyName;
+ (id)metadataPropertyName;

@end
