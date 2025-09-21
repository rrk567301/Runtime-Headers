@class PFMetadata, NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent

@property (class, readonly) Class requestClass;

@property (retain, nonatomic) PFMetadata *metadata;
@property struct CGSize { double width; double height; } imageDimensions;
@property char preflighted;
@property (nonatomic) unsigned int firstVideoTrackCodec;
@property (nonatomic) char containsVideoWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) char containsProResVideoWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) char containsHEVCVideo;
@property (readonly, nonatomic) char containsImageWithFormatEligibleForTranscoding;
@property (readonly, nonatomic) char containsHEIFImage;
@property (retain, nonatomic) NSString *livePhotoPairingIdentifier;
@property char didCheckForLivePhotoPairingIdentifier;
@property char didCheckForVideoWithFormatEligibleForTranscoding;
@property (nonatomic) long long locationMetadataStatus;
@property (nonatomic) long long captionMetadataStatus;
@property (nonatomic) long long accessibilityDescriptionMetadataStatus;
@property (readonly, nonatomic) id transcodingEligibleVideoTrackFormatDescription;
@property (nonatomic) char isHDR;
@property (nonatomic) char didCheckForIsHDR;
@property (copy) NSString *renderOriginatingSignature;

+ (id)imageSourceForFileURL:(id)a0;
+ (id)videoSourceForFileURL:(id)a0;
+ (id)imageSourceForFileURL:(id)a0 dimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)sourceForFileURL:(id)a0;
+ (id)sourceForFileURL:(id)a0 mediaType:(long long)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;

- (void).cxx_destruct;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)a0;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:(char)a0 codec:(unsigned int)a1;
- (void)markIsHDRAsCheckedWithValue:(char)a0;
- (void)checkForAccessibilityDescriptionData;
- (void)checkForCaptionData;
- (void)checkForImageEligibleForTranscoding;
- (char)checkForIsHDR;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (void)checkForVideoEligibleForTranscoding;
- (char)determineMediaTypeFromPathExtensionWithError:(id *)a0;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markCaptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:(char)a0 codec:(unsigned int)a1 isProRes:(char)a2;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)a0;
- (char)preflightWithError:(id *)a0;
- (long long)sourceAccessibilityDescriptionMetadataStatus;
- (long long)sourceCaptionMetadataStatus;
- (long long)sourceLocationMetadataStatus;

@end
