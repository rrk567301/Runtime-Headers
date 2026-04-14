@class NSString;

@interface HMDCounterRateLoggingTrigger : NSObject <HMDEventCounterObserver>

@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) unsigned long long intervalSize;
@property (nonatomic) unsigned long long *intervalCounts;
@property (nonatomic) unsigned long long windowCount;
@property (nonatomic) unsigned long long maxWindowCount;
@property (nonatomic) unsigned long long lastUpdatedInterval;
@property (readonly, nonatomic) unsigned long long windowSize;
@property (readonly, nonatomic) unsigned long long windowThreshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updatedCounterForEventName:(id)a0 fromOldValue:(unsigned long long)a1 toNewValue:(unsigned long long)a2;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3 timeSourceBlock:(id /* block */)a4;
- (void)logRateTrigger:(id)a0 triggerValue:(unsigned long long)a1;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2;

@end
