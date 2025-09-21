@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (id)logCategory;
+ (char)shouldRetry;
+ (unsigned long long)cameraClipOperationType;
+ (id)metadataPropertyName;
+ (id)streamingAssetPropertyName;

@end
