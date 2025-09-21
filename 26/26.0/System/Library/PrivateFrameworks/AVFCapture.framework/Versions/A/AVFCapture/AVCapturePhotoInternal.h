@class NSString, NSArray, AVCapturePhotoSettings, AVDepthData, AVCameraCalibrationData, NSDictionary, AVCaptureResolvedPhotoSettings, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
    struct __IOSurface { } *photoSurface;
    unsigned long long photoSurfaceSize;
    NSString *processedFileType;
    struct __CVBuffer { } *photoPixelBuffer;
    struct __CVBuffer { } *previewPixelBuffer;
    struct __CVBuffer { } *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSArray *photoLibraryThumbnails;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    BOOL didTryToDecodeDepthData;
    AVPortraitEffectsMatte *portraitEffectsMatte;
    BOOL didTryToDecodePortraitEffectsMatte;
    AVSemanticSegmentationMatte *hairSegmentationMatte;
    BOOL didTryToDecodeHairSegmentationMatte;
    AVSemanticSegmentationMatte *skinSegmentationMatte;
    BOOL didTryToDecodeSkinSegmentationMatte;
    AVSemanticSegmentationMatte *teethSegmentationMatte;
    BOOL didTryToDecodeTeethSegmentationMatte;
    AVSemanticSegmentationMatte *glassesSegmentationMatte;
    BOOL didTryToDecodeGlassesSegmentationMatte;
    struct __CVBuffer { } *constantColorConfidenceMap;
    float constantColorCenterWeightedMeanConfidenceLevel;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    unsigned long long sequenceCount;
    unsigned long long photoCount;
    NSString *sourceDeviceType;
    unsigned int expectedPhotoProcessingFlags;
    unsigned int actualPhotoProcessingFlags;
    AVCapturePhotoPrivateClientMetadata *privateClientMetadata;
    AVApplePortraitMetadata *portraitMetadata;
    BOOL lensStabilizationSupported;
}

@end
