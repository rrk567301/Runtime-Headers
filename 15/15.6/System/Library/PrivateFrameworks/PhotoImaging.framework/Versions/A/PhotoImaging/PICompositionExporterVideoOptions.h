@class NSString;

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions

@property (copy) id /* block */ metadataProcessor;
@property (copy, nonatomic) NSString *videoCodecType;
@property (nonatomic) char preserveSourceColorSpace;
@property (nonatomic) char bypassOutputSettingsIfNoComposition;
@property (nonatomic) char applyVideoOrientationAsMetadata;
@property (nonatomic) char requireHardwareEncoder;
@property (nonatomic) char includeCinematicVideoTracks;
@property (nonatomic) char computeDigest;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
