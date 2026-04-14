@class NSArray;

@interface AVCaptureDeviceFormatInternal_Tundra : NSObject {
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *videoSupportedFrameRateRanges;
    long long autoFocusSystem;
    BOOL centerStageSupported;
    BOOL backgroundBlurSupported;
}

@end
