@class NSString;

@interface HMDCounterThresholdLoggingTrigger : NSObject <HMDEventCounterObserver>

@property (readonly, nonatomic) unsigned long long threshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;

- (void).cxx_destruct;
- (void)updatedCounterForEventName:(id)a0 requestGroup:(id)a1 fromOldValue:(unsigned long long)a2 toNewValue:(unsigned long long)a3;
- (id)initWithThreshold:(unsigned long long)a0 counterName:(id)a1 uploadImmediately:(BOOL)a2;
- (void)logThresholdTrigger:(id)a0 triggerValue:(unsigned long long)a1;
- (id)initWithThreshold:(unsigned long long)a0 counterName:(id)a1;

@end
