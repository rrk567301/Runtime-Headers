@class FigCaptureSourceFormat, NSArray, NSDictionary;

@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMaxFrameDuration;
    NSDictionary *fcSourceAttributes;
    struct opaqueCMFormatDescription { } *formatDescription;
    char continuousZoomWithDepthEnabled;
    char depthDataFormatsDisabled;
    NSArray *supportedDepthDataFormats;
    char backgroundBlurSupported;
    char backgroundBlurSupportedForContinuityCamera;
    NSArray *supportedMaxPhotoDimensions;
    char studioLightingSupported;
    char studioLightingSupportedForContinuityCamera;
    char reactionEffectsSupported;
    char reactionEffectsSupportedForContinuityCamera;
    char backgroundReplacementSupported;
    char backgroundReplacementSupportedForContinuityCamera;
    char isDepthDataFormat;
    char centerStageSupported;
    char centerStageSupportedForContinuityCamera;
    char constantColorSupported;
}

@end
