@class NSString, NSData, AVCMediaStreamNegotiatorSettings, VCMediaNegotiator;

@interface AVCMediaStreamNegotiator : NSObject {
    long long _errorDetailCode;
    long long _videoHeight;
    long long _videoWidth;
    long long _dpiFactor;
    unsigned char _deviceRole;
    NSData *_mediaBlobCompressed;
    NSData *_mediaBlobNegotiated;
    NSString *_dataSessionID;
    long long _mediaStreamMode;
    VCMediaNegotiator *_mediaNegotiator;
    NSData *_remoteCallInfoBlob;
    unsigned long long _videoHDRMode;
    long long _mediaStreamTransportType;
    long long _mediaStreamAccessNetworkType;
    long long _mediaStreamTransportProtocolType;
    AVCMediaStreamNegotiatorSettings *_negotiatorSettings;
    long long _negotiatedDirection;
}

@property (readonly, nonatomic) NSData *offer;
@property (readonly, nonatomic) NSData *answer;

+ (long long)clientAccessNetworkType:(int)a0;
+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (BOOL)newOptionalObject:(id *)a0 withClass:(Class)a1 withOptionalOfferInfo:(id)a2 parameter:(id)a3 error:(id *)a4;

- (void)dealloc;
- (id)supportedPixelFormats;
- (void)addHDRModeSpecificSettings:(id)a0;
- (BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)a0;
- (id)applyNegotiatedDirectionToOptions:(id)a0 error:(id *)a1;
- (BOOL)createAnswer;
- (BOOL)createOffer;
- (id)generateMediaStreamConfigurationWithError:(id *)a0;
- (id)generateMediaStreamInitOptionsWithError:(id *)a0;
- (BOOL)initNegotiatorLocalConfiguration:(id *)a0 options:(id)a1;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (id)initWithMode:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)initWithOffer:(id)a0 error:(id *)a1;
- (id)initWithOffer:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)isNegotiatorSettingsScreenType;
- (BOOL)negotiateDirection:(id)a0 error:(id *)a1;
- (void)pickBestHDRMode:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0 preferenceList:(unsigned int *)a1 count:(int)a2 acceptDefault:(BOOL)a3;
- (BOOL)processAnswerWithError:(id *)a0 errorReason:(id *)a1;
- (BOOL)processAnswererInitOptions:(id)a0 errorReason:(id *)a1;
- (BOOL)processOfferWithError:(id *)a0 errorReason:(id *)a1;
- (void)processOffererInitOptions:(id)a0 errorReason:(id *)a1;
- (void)refreshLoggingParameters;
- (BOOL)setAnswer:(id)a0 withError:(id *)a1;
- (void)setUpDirectionBasedPropertiesForConfiguration:(id)a0;
- (BOOL)setUpEncryptionForMediaStreamConfig:(id)a0;
- (BOOL)setUpEncryptionSettingsForLocalSettings:(id)a0;
- (BOOL)setupAudioStreamConfiguration:(id)a0 errorReason:(id *)a1;
- (BOOL)setupVideoStreamConfiguration:(id)a0 errorReason:(id *)a1;

@end
