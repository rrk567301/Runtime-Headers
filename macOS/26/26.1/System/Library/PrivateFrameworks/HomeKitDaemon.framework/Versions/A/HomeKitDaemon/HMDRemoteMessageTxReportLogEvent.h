@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) double latency;
@property (readonly, nonatomic) unsigned long long retriesUsed;

+ (id)txReportForTransport:(int)a0 latency:(double)a1 retriesUsed:(unsigned long long)a2;

- (id)initWithTransport:(int)a0 latency:(double)a1 retriesUsed:(unsigned long long)a2;

@end
