@class NSData, NSString, NSArray, AVCNetworkAddress, AVCTextStreamConfig, AVCAudioStreamConfig, AVCVideoStreamConfig, NSUUID;

@interface AVCMediaStreamConfig : NSObject {
    BOOL _jitterBufferModeSet;
}

@property (retain, nonatomic) AVCNetworkAddress *localAddress;
@property (retain, nonatomic) AVCNetworkAddress *remoteAddress;
@property (copy, nonatomic) NSString *cName;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long txPayloadType;
@property (nonatomic) unsigned long long rxPayloadType;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTCPXREnabled) BOOL rtcpXREnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) unsigned char dscpTag;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSArray *remoteEndpoints;
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
@property (nonatomic) BOOL outOfProcessCodecsEnabled;
@property (nonatomic) unsigned long long packetExpirationTime;
@property (retain, nonatomic) NSUUID *rtpNWConnectionClientID;
@property (retain, nonatomic) NSUUID *rtcpNWConnectionClientID;

+ (long long)clientStreamDirectionWithDirection:(long long)a0;
+ (id)dictionaryForCommonStreamConfig:(id)a0;
+ (long long)streamDirectionWithClientDirection:(long long)a0;
+ (int)streamJitterBufferModeWithClientJitterBufferMode:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)dictionary;
- (BOOL)isValidAudioConfig;
- (BOOL)isValidTextConfig;
- (void)encodeRemoteAVCEndpoints:(id *)a0;
- (BOOL)isAudioCodecMaskValid;
- (BOOL)isAudioCodecValid;
- (BOOL)isDSCPTagValid;
- (BOOL)isJitterBufferModeValid;
- (BOOL)isRemoteEndpointsConfigValid;
- (BOOL)isStreamInputIDValid;
- (BOOL)isValidVideoConfig;
- (void)setUpWithDictionary:(id)a0;

@end
