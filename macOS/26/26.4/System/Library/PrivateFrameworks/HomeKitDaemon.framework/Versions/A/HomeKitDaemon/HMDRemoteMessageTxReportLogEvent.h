@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent

@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) long long retriesUsed;

+ (id)txReportForTransport:(int)a0 latency:(double)a1 retriesUsed:(long long)a2;

- (id)init;
- (id)initWithStartTime:(double)a0;
- (id)initWithTransportType:(int)a0 latency:(double)a1 retriesUsed:(long long)a2;

@end
