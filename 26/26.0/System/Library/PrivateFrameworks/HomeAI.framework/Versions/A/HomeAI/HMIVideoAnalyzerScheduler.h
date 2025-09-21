@class HMFTimer, NSArray, NSPointerArray, NSString, HMISystemResourceUsageMonitor;

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registerLock;
    HMFTimer *_tick;
    HMISystemResourceUsageMonitor *_usageMonitor;
}

@property (readonly) NSPointerArray *internalAnalyzers;
@property (readonly) NSArray *analyzerConfigurations;
@property (readonly) NSArray *analyzerStates;
@property long long logStateCount;
@property (readonly) NSArray *analyzers;
@property BOOL ignoreThermalAndSystemResourceUsageLevel;
@property (readonly) long long usageLevel;
@property unsigned long long maxH264VideoDecoders;
@property unsigned long long maxH264VideoEncoders;
@property unsigned long long maxH265VideoEncoders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)_logState;
- (id)init;
- (void)systemResourceUsageDidUpdate:(long long)a0 maxNumberOfAnalyzers:(unsigned long long)a1 maxAnalysisFPS:(float)a2;
- (void).cxx_destruct;
- (id)initWithTimer:(id)a0;
- (id)reducedConfiguration:(id)a0 analyzers:(id)a1;
- (void)_compactInternalAnalyzers;
- (long long)_getPeakPowerPressureLevel;
- (BOOL)_shouldSkipLogState;
- (void)_updateAnalyzer:(id)a0 withIndex:(unsigned long long)a1;
- (id)analyzerWithConfiguration:(id)a0 block:(id /* block */)a1;
- (id)reducedConfiguration:(id)a0;
- (void)registerAnalyzer:(id)a0;

@end
