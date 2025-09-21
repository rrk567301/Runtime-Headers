@class NSArray, AVWeakReference, NSString, NSDictionary, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
    NSArray *metadata;
    NSArray *availableVideoCodecs;
    NSString *videoCodec;
    NSDictionary *videoCompressionProperties;
    char sendLastVideoPreviewFrame;
    char recording;
    char paused;
    char primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
    long long primaryConstituentDeviceSwitchingBehavior;
    unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    char deviceSupportsConstituentDeviceSwitching;
    char streamingDepthSupported;
    char depthCaptureEnabled;
    char usesVirtualCaptureCard;
    char spatialVideoCaptureSupported;
    char spatialVideoCaptureEnabled;
    char trueVideoCaptureSupported;
    char trueVideoCaptureEnabled;
}

- (void)dealloc;
- (id)init;

@end
