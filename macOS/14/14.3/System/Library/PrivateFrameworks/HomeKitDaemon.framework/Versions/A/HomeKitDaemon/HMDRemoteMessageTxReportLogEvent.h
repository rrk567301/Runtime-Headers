@class NSError;

@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) double latency;
@property (readonly, nonatomic) NSError *txError;

+ (id)txReportForTransport:(int)a0 latency:(double)a1 txError:(id)a2;

- (void).cxx_destruct;
- (id)initWithTransport:(int)a0 latency:(double)a1 txError:(id)a2;

@end
