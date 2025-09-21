@class VCVideoStreamRateController, VCMediaStreamStats;

@interface VCVideoStreamRateAdaptation : VCMediaStreamRateAdaptation {
    unsigned int _receivedTmmbnBitrate;
    char _rateAdaptationEnabled;
    char _downlinkQualityDidChange;
    double _tmmbrSendTime;
    double _tmmbnReceiveTime;
    double _adaptationTime;
    double _averageBitrateWindowDuration;
    struct opaqueRTCReporting { } *_reportingAgent;
    int _reportingModuleID;
    VCVideoStreamRateController *_rateController;
}

@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) double packetLossPercentage;
@property (readonly, nonatomic) double roundTripTime;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;
@property (readonly, nonatomic) unsigned int operatingBitrate;
@property (readonly, nonatomic) unsigned int sendTmmbrBitrate;
@property (readonly, nonatomic) char isOperatingAtMaxBitrate;
@property (readonly, nonatomic) char isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;
@property (retain, nonatomic) VCMediaStreamStats *stats;

- (void)dealloc;
- (id)className;
- (unsigned int)averageReceivedBitrate;
- (id)initWithMediaStreamRateAdaptationParam:(const struct tagVCMediaStreamRateAdaptationParams { id x0; unsigned int x1; struct opaqueRTCReporting *x2; int x3; struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; char x4; } x1; } x1; } x4; struct tagHANDLE *x5; int x6; BOOL x7; id x8; id x9; } *)a0;
- (void)receivedTMMBN:(unsigned int)a0;
- (void)reportingVideoStreamEvent:(unsigned short)a0;
- (char)runVideoStreamRateAdaptation;
- (void)scheduleTMMBR:(unsigned int)a0;
- (void)setEnableRateAdaptation:(char)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setOperatingBitrate:(unsigned int)a0;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2 size:(unsigned int)a3 endOfFrame:(char)a4;
- (void)updateVideoStall:(char)a0 withStallDuration:(unsigned int)a1;

@end
