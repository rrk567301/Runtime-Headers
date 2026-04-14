@class NSArray;

@interface AVCaptureDeviceFormatInternal_Tundra : NSObject {
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *videoSupportedFrameRateRanges;
    double maxVideoZoomFactor;
    long long autoFocusSystem;
    BOOL centerStageSupported;
    BOOL backgroundBlurSupported;
    BOOL studioLightingSupported;
}

@end
