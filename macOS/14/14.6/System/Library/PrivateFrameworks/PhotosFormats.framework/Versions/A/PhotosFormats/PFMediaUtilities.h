@interface PFMediaUtilities : NSObject

@property (class, readonly) long long rawSourceMaximumPixelCountForBackgroundProcessing;
@property (class, readonly) long long rawSourceMaximumPixelCountForInteractiveEditing;
@property (class, readonly) long long devicePerformanceMemoryClass;

+ (double)gainMapHeadroomForHDRGain:(double)a0 gainMapValue:(double)a1;
+ (id)hasEmbeddedJPEGSuitableForDerivativesInImageAtURL:(id)a0 metadata:(id)a1 error:(id *)a2;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource { } *)a0;
+ (BOOL)canGenerateImageDerivativesFromType:(id)a0;
+ (struct CGImage { } *)copyCGImageFromImageGenerator:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(id *)a3;
+ (struct CGImage { } *)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer { } *)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (struct __CVBuffer { } *)createPixelBufferFromAuxiliaryImageInfo:(id)a0;
+ (BOOL)embeddedJPEGSuitableForDerivativesInRawImageProperties:(id)a0 enforcePixelCountLimits:(BOOL)a1;
+ (id)formattedCameraModelFromCameraModel:(id)a0 cameraMake:(id)a1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0 atIndex:(unsigned long long)a1;
+ (id)mainVideoTrackForAsset:(id)a0;
+ (id)urlByAttachingOutOfBandHintsBase64String:(id)a0 toVideoURL:(id)a1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource { } *)a0 imageIndex:(unsigned long long)a1;
+ (long long)defaultRasterizationDPI;
+ (unsigned int)fourCharCodeFromString:(id)a0;
+ (BOOL)isValidAVFileForURL:(id)a0;
+ (BOOL)isValidImageFileForURL:(id)a0;
+ (id)protectedTemporaryItemsSubdirectoryName;
+ (id)stringFromFourCharCode:(unsigned int)a0;
+ (id)tracksWithMediaType:(id)a0 forAsset:(id)a1;
+ (id)transformAuxiliaryImages:(id)a0 scaleFactor:(double)a1 applyingOrientation:(unsigned int)a2;
+ (BOOL)typeRequiresRasterizationDPI:(id)a0;
+ (id)trackWithTrackID:(int)a0 forAsset:(id)a1;
+ (id)_cIImageFromAuxiliaryImageInfo:(id)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (struct CGSize { double x0; double x1; })maximumImageSizeFromProperties:(id)a0;
+ (id)_cIImageFromPixelBuffer:(struct __CVBuffer { } *)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (struct __CVBuffer { } *)_createPixelBufferFromAuxiliaryImageInfo:(id)a0;
+ (id)_debugDescriptionForAssetURL:(id)a0;
+ (id)_debugDescriptionForAssetVariants:(id)a0;
+ (id)_outOfBandHintsForAVAssetProxyOrFileURLAsset:(id)a0;
+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource { } *)a0 imageIndex:(unsigned long long)a1;
+ (id)cIImageFromAuxiliaryImageInfo:(id)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer { } *)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)a0;
+ (struct CGImage { } *)createImageRefFromAuxiliaryImageInfo:(id)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (id)debugDescriptionForPlayerItem:(id)a0;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer { } *)a0 metadata:(struct CGImageMetadata { } *)a1;
+ (BOOL)embeddedJPEGSuitableForDerivativesInImageOfType:(id)a0 url:(id)a1 imageProperties:(id)a2;
+ (BOOL)enumerateImageSourceIndexesOfFileAtURL:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (void)enumerateVideoTrackFormatDescriptionsInAsset:(id)a0 withBlock:(id /* block */)a1;
+ (id)formatDebugDescriptionForVideoTrack:(id)a0;
+ (id)hevcProfileInformationForVideoTrackFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofAsset:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 intoMutableComposition:(id)a3 error:(id *)a4;
+ (id)metadataForFormat:(id)a0 forAsset:(id)a1;
+ (id)metadataForFormat:(id)a0 forAssetTrack:(id)a1;
+ (id)outOfBandHintsBase64StringForAVAssetProxyOrFileURLAsset:(id)a0;
+ (id)outOfBandHintsForURL:(id)a0;
+ (id)outOfBandHintsForVideoAsset:(id)a0;

@end
