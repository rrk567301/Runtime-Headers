@class NSString, AVPortraitEffectsMatte, AVCapturePhotoSettings, AVDepthData, AVCameraCalibrationData, NSDictionary, AVCaptureResolvedPhotoSettings, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
    struct __IOSurface { } *photoSurface;
    unsigned long long photoSurfaceSize;
    NSString *processedFileType;
    struct __CVBuffer { } *photoPixelBuffer;
    struct __CVBuffer { } *previewPixelBuffer;
    struct __CVBuffer { } *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    char didTryToDecodeDepthData;
    AVPortraitEffectsMatte *portraitEffectsMatte;
    char didTryToDecodePortraitEffectsMatte;
    AVSemanticSegmentationMatte *hairSegmentationMatte;
    char didTryToDecodeHairSegmentationMatte;
    AVSemanticSegmentationMatte *skinSegmentationMatte;
    char didTryToDecodeSkinSegmentationMatte;
    AVSemanticSegmentationMatte *teethSegmentationMatte;
    char didTryToDecodeTeethSegmentationMatte;
    AVSemanticSegmentationMatte *glassesSegmentationMatte;
    char didTryToDecodeGlassesSegmentationMatte;
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
    char lensStabilizationSupported;
}

@end
