@class NSArray;

@interface AVCaptureDeviceFormatInternal_Tundra : NSObject {
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *videoSupportedFrameRateRanges;
    double maxVideoZoomFactor;
    long long autoFocusSystem;
    char centerStageSupported;
    char backgroundBlurSupported;
    char backgroundBlurApertureSupported;
    char studioLightingSupported;
    char studioLightingIntensitySupported;
    char reactionEffectsSupported;
    char backgroundReplacementSupported;
}

@end
