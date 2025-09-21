@class NSString, NSArray;

@interface VCVirtualAVCaptureDeviceFormat : AVCaptureDeviceFormat {
    struct opaqueCMFormatDescription { } *_formatDescription;
    char _videoStabilizationMode;
}

@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (retain, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic) float videoFieldOfView;
@property (nonatomic, getter=isVideoBinned) char videoBinned;
@property (nonatomic, getter=isVideoStabilizationSupported) char videoStabilizationSupported;
@property (nonatomic) double videoMaxZoomFactor;
@property (nonatomic) double videoZoomFactorUpscaleThreshold;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minExposureDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDuration;
@property (nonatomic) float minISO;
@property (nonatomic) float maxISO;
@property (nonatomic, getter=isGlobalToneMappingSupported) char globalToneMappingSupported;
@property (nonatomic, getter=isVideoHDRSupported) char videoHDRSupported;
@property (nonatomic) struct { int width; int height; } highResolutionStillImageDimensions;
@property (nonatomic, getter=isHighPhotoQualitySupported) char highPhotoQualitySupported;
@property (nonatomic, getter=isHighestPhotoQualitySupported) char highestPhotoQualitySupported;
@property (nonatomic, getter=isPortraitEffectSupported) char portraitEffectSupported;
@property (nonatomic) long long autoFocusSystem;
@property (retain, nonatomic) NSArray *supportedColorSpaces;
@property (nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (retain, nonatomic) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (retain, nonatomic) NSArray *supportedDepthDataFormats;
@property (retain, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (retain, nonatomic) NSArray *supportedMaxPhotoDimensions;
@property (retain, nonatomic) NSArray *secondaryNativeResolutionZoomFactors;
@property (nonatomic, getter=isCenterStageSupported) char centerStageSupported;
@property (nonatomic) char reactionEffectsSupported;
@property (nonatomic, getter=isStudioLightSupported) char studioLightSupported;
@property (nonatomic, getter=isBackgroundReplacementSupported) char backgroundReplacementSupported;
@property (nonatomic, getter=isBackgroundReplacementSupportedForContinuityCamera) char backgroundReplacementSupportedForContinuityCamera;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (char)isVideoStabilizationModeSupported:(long long)a0;

@end
