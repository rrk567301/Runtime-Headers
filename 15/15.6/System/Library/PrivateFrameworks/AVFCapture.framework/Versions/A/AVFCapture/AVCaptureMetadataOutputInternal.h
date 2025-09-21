@class NSObject, NSArray, AVWeakReference, NSDictionary, AVCaptureDataOutputDelegateCallbackHelper, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_source;

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    char faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    char faceTrackingUsesFaceRecognition;
    char faceTrackingPlusEnabled;
    float faceTrackingNetworkFailureThresholdMultiplier;
    float faceTrackingFailureFieldOfViewModifier;
    char attentionDetectionEnabled;
    char faceOcclusionDetectionEnabled;
    char periocularForFaceIDReadinessEnabled;
    char attentionForFaceIDReadinessRequired;
    NSDictionary *targetFrameRateByMetadataObjectType;
    char videoPreviewHistogramMetadataObjectTypesAvailable;
    char appClipCodeObjectTypeAvailable;
    char textRegionObjectTypeAvailable;
    char sceneClassificationObjectTypeAvailable;
    char headObjectTypesAvailable;
    char humanHandObjectTypeAvailable;
    char emitsEmptyObjectDetectionMetadata;
    char offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary *previousTwoCMTimesByDetectorType;
    char drawMetadataObjects;
    char synchronizationEnabledByClient;
    char synchronizationEnabled;
    unsigned long long maxSynchronizationFrameDelay;
    NSMutableArray *synchronizedMetadataCollectionsQueue;
    NSObject<OS_dispatch_source> *synchronizationQueueFlushTimer;
}

- (void)dealloc;
- (id)init;

@end
