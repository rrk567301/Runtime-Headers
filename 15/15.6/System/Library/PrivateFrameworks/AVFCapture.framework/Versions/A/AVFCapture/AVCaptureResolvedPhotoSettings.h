@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject {
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly) struct { int x0; int x1; } photoDimensions;
@property (readonly) struct { int x0; int x1; } rawPhotoDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) struct { int x0; int x1; } embeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } rawEmbeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } portraitEffectsMatteDimensions;
@property (readonly) struct { int x0; int x1; } livePhotoMovieDimensions;
@property (readonly, getter=isFlashEnabled) char flashEnabled;
@property (readonly, getter=isRedEyeReductionEnabled) char redEyeReductionEnabled;
@property (readonly) struct { int x0; int x1; } deferredPhotoProxyDimensions;
@property (readonly, getter=isStillImageStabilizationEnabled) char stillImageStabilizationEnabled;
@property (readonly, getter=isVirtualDeviceFusionEnabled) char virtualDeviceFusionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) char dualCameraFusionEnabled;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } photoProcessingTimeRange;
@property (readonly, getter=isContentAwareDistortionCorrectionEnabled) char contentAwareDistortionCorrectionEnabled;
@property (readonly, getter=isFastCapturePrioritizationEnabled) char fastCapturePrioritizationEnabled;

+ (void)initialize;
+ (id)resolvedSettingsWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1 rawPhotoDimensions:(struct { int x0; int x1; })a2 previewDimensions:(struct { int x0; int x1; })a3 embeddedThumbnailDimensions:(struct { int x0; int x1; })a4 rawEmbeddedThumbnailDimensions:(struct { int x0; int x1; })a5 livePhotoMovieEnabled:(char)a6 livePhotoMovieDimensions:(struct { int x0; int x1; })a7 portraitEffectsMatteDimensions:(struct { int x0; int x1; })a8 hairSegmentationMatteDimensions:(struct { int x0; int x1; })a9 skinSegmentationMatteDimensions:(struct { int x0; int x1; })a10 teethSegmentationMatteDimensions:(struct { int x0; int x1; })a11 glassesSegmentationMatteDimensions:(struct { int x0; int x1; })a12 spatialOverCapturePhotoDimensions:(struct { int x0; int x1; })a13 turboModeEnabled:(char)a14 flashEnabled:(char)a15 redEyeReductionEnabled:(char)a16 HDREnabled:(char)a17 adjustedPhotoFiltersEnabled:(char)a18 EV0PhotoDeliveryEnabled:(char)a19 stillImageStabilizationEnabled:(char)a20 virtualDeviceFusionEnabled:(char)a21 squareCropEnabled:(char)a22 deferredPhotoProxyDimensions:(struct { int x0; int x1; })a23 photoProcessingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a24 contentAwareDistortionCorrectionEnabled:(char)a25 spatialPhotoCaptureEnabled:(char)a26 photoManifest:(id)a27 digitalFlashUserInterfaceHints:(unsigned long long)a28 digitalFlashUserInterfaceRGBEstimate:(id)a29 captureBeforeResolvingSettingsEnabled:(char)a30;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1 rawPhotoDimensions:(struct { int x0; int x1; })a2 previewDimensions:(struct { int x0; int x1; })a3 embeddedThumbnailDimensions:(struct { int x0; int x1; })a4 rawEmbeddedThumbnailDimensions:(struct { int x0; int x1; })a5 livePhotoMovieEnabled:(char)a6 livePhotoMovieDimensions:(struct { int x0; int x1; })a7 portraitEffectsMatteDimensions:(struct { int x0; int x1; })a8 hairSegmentationMatteDimensions:(struct { int x0; int x1; })a9 skinSegmentationMatteDimensions:(struct { int x0; int x1; })a10 teethSegmentationMatteDimensions:(struct { int x0; int x1; })a11 glassesSegmentationMatteDimensions:(struct { int x0; int x1; })a12 spatialOverCapturePhotoDimensions:(struct { int x0; int x1; })a13 turboModeEnabled:(char)a14 flashEnabled:(char)a15 redEyeReductionEnabled:(char)a16 HDREnabled:(char)a17 adjustedPhotoFiltersEnabled:(char)a18 EV0PhotoDeliveryEnabled:(char)a19 stillImageStabilizationEnabled:(char)a20 virtualDeviceFusionEnabled:(char)a21 squareCropEnabled:(char)a22 deferredPhotoProxyDimensions:(struct { int x0; int x1; })a23 photoProcessingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a24 contentAwareDistortionCorrectionEnabled:(char)a25 spatialPhotoCaptureEnabled:(char)a26 photoManifest:(id)a27 digitalFlashUserInterfaceHints:(unsigned long long)a28 digitalFlashUserInterfaceRGBEstimate:(id)a29 captureBeforeResolvingSettingsEnabled:(char)a30;
- (id)digitalFlashRGBEstimate;
- (unsigned long long)digitalFlashUserInterfaceHints;
- (id)digitalFlashUserInterfaceRGBEstimate;
- (struct { int x0; int x1; })dimensionsForSemanticSegmentationMatteOfType:(id)a0;
- (char)isAdjustedPhotoFilterRenderingEnabled;
- (char)isCaptureBeforeResolvingSettingsEnabled;
- (char)isEV0PhotoDeliveryEnabled;
- (char)isHDREnabled;
- (char)isSpatialPhotoCaptureEnabled;
- (char)isSquareCropEnabled;
- (char)isTurboModeEnabled;
- (char)livePhotoMovieEnabled;
- (id)photoManifest;
- (struct { int x0; int x1; })spatialOverCapturePhotoDimensions;

@end
