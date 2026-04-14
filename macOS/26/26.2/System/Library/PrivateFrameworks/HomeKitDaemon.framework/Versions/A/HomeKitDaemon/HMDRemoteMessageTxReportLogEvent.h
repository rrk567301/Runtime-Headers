@class NSString, NSDictionary;

@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent <HMMCloudTelemetryObservable>

@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) long long retriesUsed;
@property (nonatomic, readonly) NSString *cloudTelemetryEventType;
@property (nonatomic, readonly) NSDictionary *cloudTelemetryEventData;

+ (id)txReportForTransport:(int)a0 latency:(double)a1 retriesUsed:(long long)a2;

- (id)init;
- (id)initWithStartTime:(double)a0;
- (id)initWithTransportType:(int)a0 latency:(double)a1 retriesUsed:(long long)a2;

@end
