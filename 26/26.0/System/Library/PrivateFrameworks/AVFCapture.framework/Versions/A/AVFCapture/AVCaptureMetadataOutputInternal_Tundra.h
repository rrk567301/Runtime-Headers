@class NSArray, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureMetadataOutputInternal_Tundra : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    NSArray *metadataObjectTypes;
    BOOL faceTrackingUsesFaceRecognition;
    float faceTrackingNetworkFailureThresholdMultiplier;
    float faceTrackingFailureFieldOfViewModifier;
    struct __CFDictionary { } *metadataToProcsUnits;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

- (void)dealloc;
- (id)init;

@end
