@class NSString, NUImageExportFormat, NSURL, NSArray;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions

@property (retain) NSURL *primaryURL;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy) NUImageExportFormat *imageExportFormat;
@property BOOL applyImageOrientationAsMetadata;
@property BOOL applyVideoOrientationAsMetadata;
@property BOOL optimizeForBackgroundProcessing;
@property (copy, nonatomic) NSArray *auxiliaryImageTypes;

- (void).cxx_destruct;
- (id)init;

@end
