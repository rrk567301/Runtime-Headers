@class NSString;

@interface GKTransportMonitorPlayerStat : NSObject {
    void /* function */ monitoring;
}

@property (nonatomic, readonly) NSString *monitoring;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) double averageLatency;
@property (nonatomic, readonly) long long sentCount;
@property (nonatomic, readonly) long long receivedCount;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMonitoring:(id)a0 latency:(double)a1 averageLatency:(double)a2 sentCount:(long long)a3 receivedCount:(long long)a4;

@end
