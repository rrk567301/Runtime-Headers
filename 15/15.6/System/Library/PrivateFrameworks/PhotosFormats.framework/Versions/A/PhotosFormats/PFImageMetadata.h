@interface PFImageMetadata : NSObject

+ (char)queryImagePropertiesOfFileAtURL:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource { } *)a0;
+ (struct CGImage { } *)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer { } *)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (struct __CVBuffer { } *)createPixelBufferFromAuxiliaryImageInfo:(id)a0;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource { } *)a0 imageIndex:(unsigned long long)a1;
+ (id)transformAuxiliaryImages:(id)a0 scaleFactor:(double)a1 applyingOrientation:(unsigned int)a2;
+ (id)imagePropertiesByRemovingKey:(const void *)a0 dictionaryKey:(const void *)a1 fromImageProperties:(id)a2;
+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource { } *)a0 imageIndex:(unsigned long long)a1;
+ (id)cIImageFromAuxiliaryImageInfo:(id)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer { } *)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (struct CGImage { } *)createImageRefFromAuxiliaryImageInfo:(id)a0 applyingOrientation:(unsigned int)a1 scaleFactor:(double)a2;
+ (char)enumerateImageSourceIndexesOfFileAtURL:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (char)imageSourceIsMonoski:(struct CGImageSource { } *)a0;
+ (char)imageSourceIsSpatial:(struct CGImageSource { } *)a0;
+ (char)metadataTypeRequiresImageSource:(unsigned char)a0;
+ (char)readMetadataType:(unsigned char)a0 fromCGImageProperties:(id)a1 value:(id *)a2 error:(id *)a3;
+ (char)readMetadataType:(unsigned char)a0 fromFileURL:(id)a1 value:(id *)a2 error:(id *)a3;
+ (char)readMetadataValueFromImageAtFileURL:(id)a0 dictionaryKey:(const void *)a1 key:(const void *)a2 value:(id *)a3 error:(id *)a4;
+ (id)valueFromCGImageProperties:(id)a0 dictionaryKey:(const void *)a1 key:(const void *)a2;
+ (char)writeMetadataType:(unsigned char)a0 value:(id)a1 toCGImageProperties:(id)a2 error:(id *)a3;

@end
