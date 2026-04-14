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
    AVCMediaStreamNegotiatorSettings *_negotiatorSettings;
}

@property (readonly, nonatomic) NSData *offer;
@property (readonly, nonatomic) NSData *answer;

+ (int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)a0;
+ (long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)a0;
+ (long long)audioStreamModeWithMediaStreamMode:(long long)a0;
+ (long long)clientCodecTypeWithCodecType:(long long)a0;

- (void)dealloc;
- (id)supportedPixelFormats;
- (void)refreshLoggingParameters;
- (unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)a0;
- (BOOL)initNegotiatorLocalConfiguration:(id *)a0 options:(id)a1;
- (void)addHDRModeSpecificSettings:(id)a0;
- (id)initWithMode:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (void)processOffererInitOptions:(id)a0 errorReason:(id *)a1;
- (BOOL)createOffer;
- (BOOL)processOfferWithError:(id *)a0 errorReason:(id *)a1;
- (BOOL)processAnswererInitOptions:(id)a0 errorReason:(id *)a1;
- (id)initWithOffer:(id)a0 error:(id *)a1;
- (id)initWithOffer:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)createAnswer;
- (BOOL)processAnswerWithError:(id *)a0 errorReason:(id *)a1;
- (BOOL)setAnswer:(id)a0 withError:(id *)a1;
- (BOOL)setupAudioStreamConfiguration:(id)a0 errorReason:(id *)a1;
- (BOOL)setupVideoStreamConfiguration:(id)a0 errorReason:(id *)a1;
- (id)generateMediaStreamConfigurationWithError:(id *)a0;
- (BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)a0;
- (id)generateMediaStreamInitOptionsWithError:(id *)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0 preferenceList:(unsigned int *)a1 count:(int)a2 acceptDefault:(BOOL)a3;
- (void)pickBestHDRMode:(id)a0;

@end
