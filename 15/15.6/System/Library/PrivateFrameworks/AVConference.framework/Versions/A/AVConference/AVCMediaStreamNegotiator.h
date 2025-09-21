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
}

@property (readonly, nonatomic) NSData *offer;
@property (readonly, nonatomic) NSData *answer;

+ (long long)clientAccessNetworkType:(int)a0;
+ (long long)clientCodecTypeWithCodecType:(long long)a0;

- (void)dealloc;
- (id)supportedPixelFormats;
- (void)addHDRModeSpecificSettings:(id)a0;
- (char)addLocalCallInfoBlobToOutgoingDictionary:(id)a0;
- (char)createAnswer;
- (char)createOffer;
- (id)generateMediaStreamConfigurationWithError:(id *)a0;
- (id)generateMediaStreamInitOptionsWithError:(id *)a0;
- (char)initNegotiatorLocalConfiguration:(id *)a0 options:(id)a1;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (id)initWithMode:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)initWithOffer:(id)a0 error:(id *)a1;
- (id)initWithOffer:(id)a0 options:(id)a1 error:(id *)a2;
- (void)pickBestHDRMode:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0 preferenceList:(unsigned int *)a1 count:(int)a2 acceptDefault:(char)a3;
- (char)processAnswerWithError:(id *)a0 errorReason:(id *)a1;
- (char)processAnswererInitOptions:(id)a0 errorReason:(id *)a1;
- (char)processOfferWithError:(id *)a0 errorReason:(id *)a1;
- (void)processOffererInitOptions:(id)a0 errorReason:(id *)a1;
- (void)refreshLoggingParameters;
- (char)setAnswer:(id)a0 withError:(id *)a1;
- (char)setupAudioStreamConfiguration:(id)a0 errorReason:(id *)a1;
- (char)setupVideoStreamConfiguration:(id)a0 errorReason:(id *)a1;

@end
