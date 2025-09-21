@interface PAMediaConversionServiceImagingUtilities : NSObject

+ (char)generatePosterFrameExportForVideoURL:(id)a0 outputData:(id *)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 outputFileType:(id)a3 error:(id *)a4;
+ (char)_generatePosterFrameExportForVideoURL:(id)a0 imageDestinationToAddToAndFinalize:(struct CGImageDestination { } *)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (id)dataForSingleImageJPEGPassthroughConversionForImageSource:(struct CGImageSource { } *)a0 primaryImageProperties:(id)a1;
+ (char)generatePosterFrameExportForVideoURL:(id)a0 destinationURL:(id)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 outputFileType:(id)a3 error:(id *)a4;
+ (id)imageDataForPassthroughConversionForSourceURL:(id)a0 metadataPolicy:(id)a1 outResultImageSize:(struct CGSize { double x0; double x1; } *)a2;
+ (id)imagePropertiesByImageIndexInImageSource:(struct CGImageSource { } *)a0 processedWithMetadataPolicy:(id)a1;
+ (void)logMissingPropertiesInCMPhotoOutputData:(id)a0 comparedToProcessedSourceImagePropertiesByIndex:(id)a1;
+ (id)primaryImagePropertiesForFileAtURL:(id)a0;

@end
