@class NSObject;
@protocol OS_dispatch_queue;

@interface SPRetryCount : NSObject

@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) double decayWaitInterval;

- (void)increment;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)a0;

@end
