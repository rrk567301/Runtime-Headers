@class NSArray, AVSemanticStyle;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {
    long long uniqueID;
    struct { int width; int height; } photoDimensions;
    struct { int width; int height; } rawPhotoDimensions;
    struct { int width; int height; } previewDimensions;
    struct { int width; int height; } embeddedThumbnailDimensions;
    struct { int width; int height; } rawEmbeddedThumbnailDimensions;
    char livePhotoMovieEnabled;
    struct { int width; int height; } livePhotoMovieDimensions;
    struct { int width; int height; } portraitEffectsMatteDimensions;
    struct { int width; int height; } hairSegmentationMatteDimensions;
    struct { int width; int height; } skinSegmentationMatteDimensions;
    struct { int width; int height; } teethSegmentationMatteDimensions;
    struct { int width; int height; } glassesSegmentationMatteDimensions;
    struct { int width; int height; } spatialOverCapturePhotoDimensions;
    char turboModeEnabled;
    char flashEnabled;
    char redEyeReductionEnabled;
    char HDREnabled;
    char adjustedPhotoFiltersEnabled;
    char EV0PhotoDeliveryEnabled;
    char stillImageStabilizationEnabled;
    char virtualDeviceFusionEnabled;
    char squareCropEnabled;
    struct { int width; int height; } deferredPhotoProxyDimensions;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } photoProcessingTimeRange;
    char contentAwareDistortionCorrectionEnabled;
    char spatialPhotoCaptureEnabled;
    NSArray *photoManifest;
    unsigned long long digitalFlashUserInterfaceHints;
    NSArray *digitalFlashUserInterfaceRGBEstimate;
    char captureBeforeResolvingSettingsEnabled;
    AVSemanticStyle *semanticStyle;
}

- (void)dealloc;

@end
