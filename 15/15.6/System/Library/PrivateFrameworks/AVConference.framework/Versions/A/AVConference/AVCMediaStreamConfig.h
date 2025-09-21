@class NSString, AVCNetworkAddress, NSData, AVCVideoStreamConfig, AVCAudioStreamConfig, AVCTextStreamConfig;

@interface AVCMediaStreamConfig : NSObject {
    char _jitterBufferModeSet;
}

@property (retain, nonatomic) AVCNetworkAddress *localAddress;
@property (retain, nonatomic) AVCNetworkAddress *remoteAddress;
@property (copy, nonatomic) NSString *cName;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long txPayloadType;
@property (nonatomic) unsigned long long rxPayloadType;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, getter=isRateAdaptationEnabled) char rateAdaptationEnabled;
@property (nonatomic, getter=isRTCPEnabled) char rtcpEnabled;
@property (nonatomic, getter=isRTCPXREnabled) char rtcpXREnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTPTimeOutEnabled) char rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) char rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) unsigned char dscpTag;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *receiveMediaKey;
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic) long long SRTCPCipherSuite;
@property (retain, nonatomic) AVCAudioStreamConfig *audio;
@property (retain, nonatomic) AVCVideoStreamConfig *video;
@property (retain, nonatomic) AVCTextStreamConfig *text;
@property (nonatomic) long long streamInputID;
@property (nonatomic) unsigned long long networkClockID;
@property (nonatomic) unsigned int jitterBufferMode;
@property (nonatomic) unsigned long long fixedJitterBufferSize;
@property (nonatomic) long long accessNetworkType;
@property (nonatomic) char outOfProcessCodecsEnabled;

+ (long long)cipherSuiteWithClientCipherSuite:(long long)a0;
+ (long long)clientCipherSuiteWithCipherSuite:(long long)a0;
+ (long long)clientStreamDirectionWithDirection:(long long)a0;
+ (id)dictionaryForCommonStreamConfig:(id)a0;
+ (long long)streamDirectionWithClientDirection:(long long)a0;
+ (int)streamJitterBufferModeWithClientJitterBufferMode:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionary;
- (char)isValidAudioConfig;
- (char)isValidTextConfig;
- (char)isAudioCodecMaskValid;
- (char)isAudioCodecValid;
- (char)isDSCPTagValid;
- (char)isJitterBufferModeValid;
- (char)isStreamInputIDValid;
- (char)isValidVideoConfig;
- (void)setUpWithDictionary:(id)a0;

@end
