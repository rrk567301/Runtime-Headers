@class VCMediaStreamConfig, AVCBasebandCongestionDetector;

@interface VCMediaStreamTransport : NSObject {
    unsigned int _localSSRC;
    char _isSRTPInitialized;
    int _payloadType;
    struct { void *context; void /* function */ *creationCallback; char isReceiveExternallyScheduled; } _transportStreamInfo;
    char _rtcpXREnabled;
}

@property (readonly, nonatomic) VCMediaStreamConfig *streamConfig;
@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) unsigned short idsStreamId;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly, nonatomic, getter=isRTCPSendEnabled) char rtcpSendEnabled;
@property (readonly, nonatomic) char encryptionInfoReceived;
@property (nonatomic) long long streamDirection;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, getter=isRTPTimeoutEnabled) char rtpTimeoutEnabled;
@property (nonatomic, getter=isDecryptionTimeoutEnabled) char decryptionTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPTimeoutEnabled) char rtcpTimeoutEnabled;
@property (nonatomic, getter=isRTCPEnabled) char rtcpEnabled;
@property (readonly, nonatomic, getter=isRTCPXREnabled) char rtcpXREnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (readonly, nonatomic) struct tagVCCryptor { } *receiverSframeCryptor;
@property (readonly, nonatomic) struct tagVCCryptor { } *transmitterSframeCryptor;

+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)a0;
+ (int)getSRTPMediaKeyLength:(long long)a0;
+ (char)isSameSRTPKey:(id)a0 newKey:(id)a1;

- (void)dealloc;
- (void)reset;
- (char)isSendingMedia:(id)a0;
- (int)onStart;
- (char)setupRTPForIDS:(id *)a0;
- (char)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; char x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; char x4; } *)a0 error:(id *)a1;
- (char)configureWithStreamConfig:(id)a0 setupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; char x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; char x4; } *)a1 reducedSizeRTCPPackets:(char)a2 hopByHopEncryptRTCPPackets:(char)a3 statisticsCollector:(id)a4 basebandCongestionDetector:(id)a5 error:(id *)a6;
- (struct tagVCCryptor { } *)createSframeCryptorWithStreamConfig:(id)a0 ssrc:(unsigned int)a1 error:(id *)a2;
- (char)generateRTCPXRSummaryReport:(struct tagVCRTCPXRSummaryReport { BOOL x0; BOOL x1; BOOL x2; int x3; unsigned int x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; int x9; int x10; int x11; int x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; } *)a0 reportCount:(char *)a1;
- (char)generateRTCPXRVoIPMetricsReport:(struct tagVCRTCPXRVoIPMetricsReport { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned short x17; unsigned short x18; unsigned short x19; unsigned short x20; unsigned short x21; } *)a0 reportCount:(char *)a1;
- (char)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; } *)a0 reportCount:(char *)a1;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } *)a0 withMediaKey:(id)a1;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)a0;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)a0;
- (void)handleEncryptionInfoChange:(id)a0;
- (id)initWithHandle:(struct tagHANDLE { int x0; } *)a0 localSSRC:(unsigned int)a1;
- (char)isSameSRTPConfig:(id)a0;
- (void)onStop;
- (void)registerRTPPayloadMappings;
- (void)resetPayloadMapping;
- (id)rxNetworkPayloads;
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS { unsigned int x0; int x1; char *x2; unsigned long long x3; unsigned char x4; unsigned short *x5; int x6; unsigned short x7; unsigned short x8; unsigned int x9; struct _RTCP_RECEPTION_REPORT *x10; unsigned char x11; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO *x12; struct tagVCRTCPXRSummaryReport *x13; unsigned char x14; struct tagVCRTCPXRVoIPMetricsReport *x15; unsigned char x16; unsigned short x17[12]; unsigned char x18; BOOL x19; unsigned long long x20; BOOL x21; struct tagRTCP_CUSTOM_PSFB_LOSS_FB_INFO *x22; unsigned int x23; } *)a0;
- (char)sendIntervalDidElapse:(int *)a0 remainingTime:(double *)a1;
- (char)setThrottlingInterval:(double)a0;
- (char)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; char x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; char x4; } *)a0 error:(id *)a1;
- (char)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; char x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; char x4; } *)a0 error:(id *)a1;
- (char)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; char x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; char x4; } *)a0 error:(id *)a1;
- (int)setupRTPWithTransportStreams;
- (int)setupSRTP;
- (char)setupSframeCryptorsWithError:(id *)a0;
- (void)updateLastGeneratedKeyMaterial;

@end
