@class NSString, NSArray, NSDictionary, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {
    unsigned long long changeSeed;
    NSString *builtInCompositorName;
    Class customCompositorClass;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
    int sourceTrackIDForFrameTiming;
    struct CGSize { double width; double height; } renderSize;
    float renderScale;
    NSString *colorPrimaries;
    NSString *colorYCbCrMatrix;
    NSString *colorTransferFunction;
    NSString *perFrameHDRDisplayMetadataPolicy;
    NSArray *instructions;
    char auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
    NSArray *sourceSampleDataTracks;
    NSDictionary *sourceVideoTrackWindowsForTrackIDs;
    NSDictionary *sourceSampleDataTrackWindowsForTrackIDs;
}

@end
