@class NSObject;
@protocol OS_dispatch_source;

@interface _DKCPUUsageMonitor : _DKMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long lastUserTick;
@property (nonatomic) unsigned long long lastIdleTick;
@property (nonatomic) unsigned long long lastSysTick;
@property (nonatomic) unsigned long long lastCPUUsageLevel;

+ (id)entitlements;
+ (id)eventStream;

- (id)loadState;
- (void)saveState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)updateCPUUsagePercentage:(unsigned long long *)a0;
- (void)start;
- (unsigned long long)getCurrentCPUUsageLevel;
- (void)setCurrentCPUUsageLevel:(unsigned long long)a0;
- (void)getCPUTicksForUser:(unsigned long long *)a0 system:(unsigned long long *)a1 idle:(unsigned long long *)a2;

@end
