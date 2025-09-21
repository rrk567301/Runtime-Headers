@class NSArray, NSDictionary, AVWeakReference, AVCaptureDataOutputDelegateCallbackHelper, FigCaptureFrameCounter;

@interface AVCaptureVideoDataOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSDictionary *videoSettings;
    NSDictionary *clientVideoSettings;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } deprecatedMinFrameDuration;
    char alwaysDiscardsLateVideoFrames;
    char automaticallyConfiguresOutputBufferDimensions;
    char deliversPreviewSizedOutputBuffers;
    char sceneStabilityMetadataEnabled;
    char allLossyVideoCVPixelFormatTypesEnabled;
    NSArray *requestedBufferAttachments;
    char videoSettingsDimensionsOverrideEnabled;
    char videoSettingsDimensionsOverrideEnabledByClient;
    char videoSettingsAspectRatioOverrideEnabled;
    NSArray *availableVideoCVPixelFormatTypes;
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    FigCaptureFrameCounter *frameCounter;
}

- (void)dealloc;
- (id)init;

@end
