@class AVCaptureResolvedPhotoSettingsInternal_Tundra;

@interface AVCaptureResolvedPhotoSettings_Tundra : NSObject {
    AVCaptureResolvedPhotoSettingsInternal_Tundra *_internal;
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
@property (readonly) struct { int width; int height; } deferredPhotoProxyDimensions;
@property (readonly, getter=isStillImageStabilizationEnabled) char stillImageStabilizationEnabled;
@property (readonly, getter=isVirtualDeviceFusionEnabled) char virtualDeviceFusionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) char dualCameraFusionEnabled;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } photoProcessingTimeRange;
@property (readonly, getter=isContentAwareDistortionCorrectionEnabled) char contentAwareDistortionCorrectionEnabled;
@property (readonly, getter=isFastCapturePrioritizationEnabled) char fastCapturePrioritizationEnabled;

+ (id)resolvedSettingsWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1;
- (struct { int x0; int x1; })dimensionsForSemanticSegmentationMatteOfType:(id)a0;

@end
