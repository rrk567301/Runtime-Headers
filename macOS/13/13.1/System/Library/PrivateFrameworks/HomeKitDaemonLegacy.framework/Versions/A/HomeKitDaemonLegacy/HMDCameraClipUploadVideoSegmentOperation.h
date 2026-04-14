@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (BOOL)shouldRetry;
+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;
+ (id)streamingAssetPropertyName;
+ (id)metadataPropertyName;

@end
