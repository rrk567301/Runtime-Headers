@class NSArray, VCMediaNegotiatorAudioConfiguration, NSMutableSet, NSDictionary, VCVideoRuleCollections, NSString;

@interface AVCMediaStreamNegotiatorSettings : NSObject

@property (readonly, nonatomic) VCVideoRuleCollections *screenRuleCollections;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) long long tilesPerFrame;
@property (readonly, nonatomic) unsigned char bitrateArbiterMode;
@property (readonly, nonatomic) long long videoStreamMode;
@property (readonly, nonatomic) long long audioStreamMode;
@property (readonly, nonatomic) long long captureSource;
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (readonly, nonatomic) int preferredAudioCodec;
@property (readonly, nonatomic) BOOL ltrpEnabled;
@property (readonly, nonatomic) long long preferredAudioCodecType;
@property (readonly, nonatomic) unsigned int localSSRC;
@property (readonly, nonatomic) NSArray *hdrModePixelFormats;
@property (readonly, nonatomic) NSMutableSet *hdrModesSupported;
@property (readonly, nonatomic) unsigned long long ptime;
@property (readonly, nonatomic) unsigned long long packetExpirationTime;
@property (readonly, nonatomic) unsigned long long minBandwidth;
@property (readonly, nonatomic) unsigned long long maxBandwidth;
@property (nonatomic) long long accessNetworkType;
@property (readonly, nonatomic) long long mediaStreamDirection;
@property (readonly, nonatomic) BOOL rtcpTimeOutEnabled;
@property (readonly, nonatomic) double rtcpTimeOutInterval;
@property (readonly, nonatomic) double rtcpSendInterval;
@property (readonly, nonatomic) unsigned int jitterBufferMode;
@property (readonly, nonatomic) unsigned long long fixedJitterBufferSize;
@property (readonly, nonatomic) BOOL shouldSetJitterBufferMode;
@property (readonly, nonatomic) unsigned long long audioChannelCount;
@property (readonly, nonatomic) unsigned long long preferredMediaBitRate;
@property (readonly, nonatomic) unsigned char featureListStringType;
@property (readonly, nonatomic) NSDictionary *featureListString;
@property (readonly, nonatomic) int connectionType;
@property (readonly, nonatomic) BOOL shouldApply16AlignedAdjustment;
@property (readonly, nonatomic) BOOL blackFrameOnClearScreenEnabledDefault;
@property (readonly, nonatomic) BOOL blackFrameOnClearScreenEnabled;
@property (readonly, nonatomic) BOOL foveationIsSupported;
@property (readonly, nonatomic) NSString *audioDeviceUID;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL shouldNegotiateDirection;
@property (readonly, nonatomic) long long rtpCipherSuite;
@property (readonly, nonatomic) long long rtcpCipherSuite;
@property (readonly, nonatomic) NSArray *videoBufferDescription;
@property (readonly, nonatomic) BOOL enableInterleavedEncoding;
@property (nonatomic) long long systemAudioCaptureMuteBehavior;

+ (unsigned long long)hdrModeWithNegotiatorInitOptions:(id)a0;
+ (BOOL)isValidDirection:(long long)a0;
+ (id)negotiatorSettingsForMode:(long long)a0 deviceRole:(unsigned char)a1 options:(id)a2 errorString:(id *)a3;
+ (id)newFilterVideoRuleCollection:(id)a0 forDirection:(long long)a1;

- (void)dealloc;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 defaultDirection:(long long)a2 error:(id *)a3;
- (BOOL)setUpDirection:(long long)a0 withOptions:(id)a1;

@end
