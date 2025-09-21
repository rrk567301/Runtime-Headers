@class NSArray, NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

@property (copy) NUImageExportFormat *imageExportFormat;
@property double JPEGCompressionQuality;
@property (copy) id /* block */ metadataProcessor;
@property char optimizeForSharing;
@property char applyImageOrientationAsMetadata;
@property char optimizeForBackgroundProcessing;
@property char enableHDR;
@property (copy, nonatomic) NSArray *auxiliaryImageTypes;

- (id)init;
- (void).cxx_destruct;
- (id)imageExportFormatForURL:(id)a0 isHDR:(char)a1;

@end
