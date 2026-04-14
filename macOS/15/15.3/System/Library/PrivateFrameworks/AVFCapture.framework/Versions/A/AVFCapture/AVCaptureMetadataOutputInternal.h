@class NSArray, AVWeakReference, NSDictionary, AVCaptureDataOutputDelegateCallbackHelper, NSMutableDictionary;

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    BOOL faceTrackingUsesFaceRecognition;
    BOOL faceTrackingPlusEnabled;
    float faceTrackingNetworkFailureThresholdMultiplier;
    float faceTrackingFailureFieldOfViewModifier;
    BOOL attentionDetectionEnabled;
    NSDictionary *targetFrameRateByMetadataObjectType;
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL textRegionObjectTypeAvailable;
    BOOL sceneClassificationObjectTypeAvailable;
    BOOL headObjectTypesAvailable;
    BOOL humanHandObjectTypeAvailable;
    BOOL emitsEmptyObjectDetectionMetadata;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary *previousTwoCMTimesByDetectorType;
    BOOL drawMetadataObjects;
}

- (void)dealloc;
- (id)init;

@end
