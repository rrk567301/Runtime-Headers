@class NSArray, NSDictionary, NSString;

@interface GKTransportMonitorStat : NSObject {
    void /* function */ playerStats;
}

@property (nonatomic, readonly) NSArray *playerStats;
@property (nonatomic, readonly) NSDictionary *overallLatencies;
@property (nonatomic, readonly) double overallLatency;
@property (nonatomic, readonly) NSDictionary *overallAverageLatencies;
@property (nonatomic, readonly) double overallAverageLatency;
@property (nonatomic, readonly) double overallPacketLoss;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlayerStats:(id)a0;

@end
