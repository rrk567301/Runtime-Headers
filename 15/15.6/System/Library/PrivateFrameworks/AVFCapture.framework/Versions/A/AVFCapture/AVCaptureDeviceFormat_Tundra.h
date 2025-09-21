@class NSString, NSArray, AVCaptureDeviceFormatInternal_Tundra, AVExposureBiasRange, AVZoomRange;

@interface AVCaptureDeviceFormat_Tundra : NSObject {
    AVCaptureDeviceFormatInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoBinned) char videoBinned;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) char videoStabilizationSupported;
@property (readonly, nonatomic) double videoMaxZoomFactor;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property (readonly, nonatomic) AVZoomRange *systemRecommendedVideoZoomRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly, nonatomic) AVExposureBiasRange *systemRecommendedExposureBiasRange;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic, getter=isGlobalToneMappingSupported) char globalToneMappingSupported;
@property (readonly, nonatomic, getter=isVideoHDRSupported) char videoHDRSupported;
@property (readonly, nonatomic) struct { int x0; int x1; } highResolutionStillImageDimensions;
@property (readonly, nonatomic, getter=isHighPhotoQualitySupported) char highPhotoQualitySupported;
@property (readonly, nonatomic, getter=isHighestPhotoQualitySupported) char highestPhotoQualitySupported;
@property (readonly, nonatomic) long long autoFocusSystem;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedVideoZoomRangesForDepthDataDelivery;
@property (readonly, nonatomic) char zoomFactorsOutsideOfVideoZoomRangesForDepthDeliverySupported;
@property (readonly, nonatomic) NSArray *supportedDepthDataFormats;
@property (readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (readonly, nonatomic) NSArray *supportedMaxPhotoDimensions;
@property (readonly, nonatomic) NSArray *secondaryNativeResolutionZoomFactors;
@property (readonly, nonatomic, getter=isAutoVideoFrameRateSupported) char autoVideoFrameRateSupported;

+ (void)initialize;
+ (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { } *)a0 centerStageSupported:(char)a1 backgroundBlurSupported:(char)a2 backgroundBlurApertureSupported:(char)a3 studioLightingSupported:(char)a4 studioLightingIntensitySupported:(char)a5 reactionEffectsSupported:(char)a6 backgroundReplacementSupported:(char)a7 frameRateRanges:(id)a8;
+ (id)deviceFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (id)deviceFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(char)a2 backgroundBlurSupported:(char)a3 backgroundBlurApertureSupported:(char)a4 studioLightingSupported:(char)a5 studioLightingIntensitySupported:(char)a6 reactionEffectsSupported:(char)a7 backgroundReplacementSupported:(char)a8 zoomSupported:(char)a9 autoFocusSystem:(long long)a10;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (struct { int x0; int x1; })_formatVideoDimensions;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(char)a2 backgroundBlurSupported:(char)a3 backgroundBlurApertureSupported:(char)a4 studioLightingSupported:(char)a5 studioLightingIntensitySupported:(char)a6 reactionEffectsSupported:(char)a7 backgroundReplacementSupported:(char)a8 zoomSupported:(char)a9 autoFocusSystem:(long long)a10;
- (char)isBackgroundBlurApertureSupported;
- (char)isBackgroundBlurSupported;
- (char)isBackgroundBlurSupportedForContinuityCamera;
- (char)isBackgroundReplacementSupported;
- (char)isBackgroundReplacementSupportedForContinuityCamera;
- (char)isCenterStageSupported;
- (char)isCenterStageSupportedForContinuityCamera;
- (char)isConstantColorSupported;
- (char)isMultiCamSupported;
- (char)isPortraitEffectSupported;
- (char)isPortraitEffectsMatteStillImageDeliverySupported;
- (char)isSpatialVideoCaptureSupported;
- (char)isStereoCaptureSupported;
- (char)isStereoVideoCaptureSupported;
- (char)isStudioLightSupported;
- (char)isStudioLightingIntensitySupported;
- (char)isStudioLightingSupported;
- (char)isStudioLightingSupportedForContinuityCamera;
- (char)isVideoStabilizationModeSupported:(long long)a0;
- (char)reactionEffectsSupported;
- (char)reactionEffectsSupportedForContinuityCamera;
- (id)supportedMaxPhotoDimensionsPrivate;
- (id)videoFrameRateRangeForBackgroundBlur;
- (id)videoFrameRateRangeForBackgroundReplacement;
- (id)videoFrameRateRangeForCenterStage;
- (id)videoFrameRateRangeForPTEffectVideoEffects;
- (id)videoFrameRateRangeForPortraitEffect;
- (id)videoFrameRateRangeForReactionEffectsInProgress;
- (id)videoFrameRateRangeForStudioLight;
- (id)videoFrameRateRangeForStudioLighting;
- (double)videoMaxZoomFactorForCenterStage;
- (double)videoMinZoomFactorForCenterStage;

@end
