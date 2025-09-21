@class AVPortraitEffectsMatte, AVCaptureResolvedPhotoSettings, NSDictionary, AVCameraCalibrationData, NSString, AVDepthData, AVCapturePhotoInternal;

@interface AVCapturePhoto : NSObject

@property (readonly, nonatomic) AVCapturePhotoInternal *internal;
@property (readonly, nonatomic) struct { int x0; int x1; } dimensions;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct __CVBuffer { } *previewPixelBuffer;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) AVDepthData *depthData;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *metadata;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) long long photoCount;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct __CVBuffer { } *constantColorConfidenceMap;
@property (readonly) float constantColorCenterWeightedMeanConfidenceLevel;
@property (readonly, getter=isConstantColorFallbackPhoto) BOOL constantColorFallbackPhoto;

+ (void)initialize;
+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)a0 codec:(unsigned int)a1 unresolvedSettings:(id)a2;

- (id)photoLibraryThumbnails;
- (id)fileDataRepresentation;
- (int)_maximumAppleProRAWBitDepth;
- (id)livePhotoMovieFileURL;
- (id)processedFileType;
- (BOOL)_isProRAWPhoto;
- (BOOL)_isUncompressedYUVOrRGBPhoto;
- (id)bracketSettings;
- (struct CGImage { } *)previewCGImageRepresentation;
- (long long)sequenceCount;
- (unsigned int)expectedPhotoProcessingFlags;
- (long long)lensStabilizationStatus;
- (id)_defaultRawCompressionSettings;
- (unsigned int)photoProcessingFlags;
- (id)semanticSegmentationMatteForType:(id)a0;
- (struct __CVBuffer { } *)_embeddedThumbnailSourcePixelBuffer;
- (BOOL)_isCompressedPhoto;
- (BOOL)_isSushiRAWPhoto;
- (float)focusPixelBlurScore;
- (id)portraitMetadata;
- (struct CGImage { } *)CGImageRepresentation;
- (id)privateClientMetadata;
- (id)fileDataRepresentationWithCustomizer:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (unsigned int)actualPhotoProcessingFlags;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3 replacementPortraitEffectsMatte:(id)a4 replacementHairSegmentationMatte:(id)a5 replacementSkinSegmentationMatte:(id)a6 replacementTeethSegmentationMatte:(id)a7 replacementGlassesSegmentationMatte:(id)a8 replacementRawCompressionSettings:(id)a9 exceptionReason:(id *)a10;
- (unsigned int)_orientation;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 photoSurface:(struct __IOSurface { } *)a1 photoSurfaceSize:(unsigned long long)a2 processedFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 embeddedThumbnailSourceSurface:(struct __IOSurface { } *)a5 photoLibraryThumbnails:(id)a6 metadata:(id)a7 depthDataSurface:(struct __IOSurface { } *)a8 depthMetadataDictionary:(id)a9 portraitEffectsMatteSurface:(struct __IOSurface { } *)a10 portraitEffectsMatteMetadataDictionary:(id)a11 hairSegmentationMatteSurface:(struct __IOSurface { } *)a12 hairSegmentationMatteMetadataDictionary:(id)a13 skinSegmentationMatteSurface:(struct __IOSurface { } *)a14 skinSegmentationMatteMetadataDictionary:(id)a15 teethSegmentationMatteSurface:(struct __IOSurface { } *)a16 teethSegmentationMatteMetadataDictionary:(id)a17 glassesSegmentationMatteSurface:(struct __IOSurface { } *)a18 glassesSegmentationMatteMetadataDictionary:(id)a19 constantColorConfidenceMapSurface:(struct __IOSurface { } *)a20 constantColorMetadataDictionary:(id)a21 captureRequest:(id)a22 bracketSettings:(id)a23 sequenceCount:(unsigned long long)a24 photoCount:(unsigned long long)a25 expectedPhotoProcessingFlags:(unsigned int)a26 sourceDeviceType:(id)a27;
- (id)description;
- (id)fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3;

@end
