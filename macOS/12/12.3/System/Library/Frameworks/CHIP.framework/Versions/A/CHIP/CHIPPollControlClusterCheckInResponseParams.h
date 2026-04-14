@class NSNumber;

@interface CHIPPollControlClusterCheckInResponseParams : NSObject

@property (retain, nonatomic) NSNumber *startFastPolling;
@property (retain, nonatomic) NSNumber *fastPollTimeout;

- (id)init;
- (void).cxx_destruct;

@end
