@interface VCRateControlOWRDEstimator : NSObject {
    char _useUINT16;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousOOOSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    unsigned long long _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousOOOReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    unsigned long long _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    unsigned int _abnormalOWRDSampleCount;
    unsigned int _sendTimestampOOORecoveredCount;
    unsigned int _receiveTimestampOOORecoveredCount;
    unsigned int _spuriousLagWithoutSpikeCount;
    char _sendTimestampSpikeDetected;
    char _receiveTimestampSpikeDetected;
    double _averageSendInterval;
    double _averageReceiveInterval;
}

@property (readonly, nonatomic) double owrd;
@property (nonatomic) unsigned int mode;

- (void)calculateOWRDWithSendTime:(double)a0 receiveTime:(double)a1 roundTripTime:(double)a2;
- (char)detectAbnormalOWRDWithRoundTripTime:(double)a0;
- (char)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)a0;
- (char)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)a0;
- (double)relativeReceiveTimeWithTimestamp:(unsigned int)a0 timestampRate:(unsigned int)a1;
- (double)relativeSendTimeWithTimestamp:(unsigned int)a0 timestampRate:(unsigned int)a1;
- (void)resetOWRDEstimation;
- (char)shouldResumeOWRDEstimationWhenOutOfOrderWithTimestamp:(unsigned int)a0 isSend:(char)a1;
- (char)shouldResumeOWRDEstimationWhenSpuriousLagDetected;

@end
