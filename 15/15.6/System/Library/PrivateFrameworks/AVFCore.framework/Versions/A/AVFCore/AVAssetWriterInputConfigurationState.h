@class NSString, NSDictionary, NSArray, NSURL, AVOutputSettings;

@interface AVAssetWriterInputConfigurationState : NSObject

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) AVOutputSettings *outputSettings;
@property (retain, nonatomic) struct opaqueCMFormatDescription { } *sourceFormatHint;
@property (nonatomic) int trackID;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (copy, nonatomic) NSArray *metadataItems;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic) char expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) char marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) long long layer;
@property (nonatomic) short alternateGroupID;
@property (nonatomic) short provisionalAlternateGroupID;
@property (copy, nonatomic) NSDictionary *trackReferences;
@property (nonatomic) char performsMultiPassEncodingIfSupported;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) long long preferredMediaChunkSize;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) char maximizePowerEfficiency;

- (void)dealloc;

@end
