@class NSString, NSArray, AVCaptureDeviceFormatInternal_Tundra;

@interface AVCaptureDeviceFormat_Tundra : NSObject {
    AVCaptureDeviceFormatInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (readonly, nonatomic) double videoMaxZoomFactor;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (readonly, nonatomic) struct { int x0; int x1; } highResolutionStillImageDimensions;
@property (readonly, nonatomic, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, nonatomic, getter=isHighestPhotoQualitySupported) BOOL highestPhotoQualitySupported;
@property (readonly, nonatomic) long long autoFocusSystem;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedDepthDataFormats;
@property (readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (readonly, nonatomic) NSArray *supportedMaxPhotoDimensions;
@property (readonly, nonatomic) NSArray *secondaryNativeResolutionZoomFactors;

+ (void)initialize;
+ (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { } *)a0 centerStageSupported:(BOOL)a1 backgroundBlurSupported:(BOOL)a2 studioLightingSupported:(BOOL)a3 frameRateRanges:(id)a4;
+ (id)deviceFormatWithFormatDescription:(const struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(BOOL)a2 backgroundBlurSupported:(BOOL)a3 studioLightingSupported:(BOOL)a4 zoomSupported:(BOOL)a5 autoFocusSystem:(long long)a6;
+ (id)deviceFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isMultiCamSupported;
- (id)initWithFormatDescription:(const struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(BOOL)a2 backgroundBlurSupported:(BOOL)a3 studioLightingSupported:(BOOL)a4 zoomSupported:(BOOL)a5 autoFocusSystem:(long long)a6;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)isVideoStabilizationModeSupported:(long long)a0;
- (struct { int x0; int x1; })_formatVideoDimensions;
- (BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (BOOL)isCenterStageSupported;
- (double)videoMinZoomFactorForCenterStage;
- (double)videoMaxZoomFactorForCenterStage;
- (id)videoFrameRateRangeForCenterStage;
- (BOOL)isPortraitEffectSupported;
- (BOOL)isBackgroundBlurSupported;
- (id)videoFrameRateRangeForPortraitEffect;
- (id)videoFrameRateRangeForBackgroundBlur;
- (BOOL)isStudioLightingSupported;
- (id)videoFrameRateRangeForStudioLighting;
- (BOOL)isStudioLightSupported;
- (id)videoFrameRateRangeForStudioLight;
- (id)supportedMaxPhotoDimensionsPrivate;

@end
