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
@property char ignoreThermalAndSystemResourceUsageLevel;
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

- (id)init;
- (void).cxx_destruct;
- (void)_logState;
- (void)timerDidFire:(id)a0;
- (void)systemResourceUsageDidChangeTo:(long long)a0;
- (void)maximumNumberOfAnalyzersDidChangeTo:(unsigned long long)a0;
- (void)_compactInternalAnalyzers;
- (long long)_getPeakPowerPressureLevel;
- (char)_shouldSkipLogState;
- (void)_updateAnalyzer:(id)a0 withIndex:(unsigned long long)a1;
- (id)analyzerWithConfiguration:(id)a0 block:(id /* block */)a1;
- (id)reducedConfiguration:(id)a0;
- (id)reducedConfiguration:(id)a0 configurations:(id)a1;
- (id)reducedConfiguration:(id)a0 states:(id)a1;
- (void)registerAnalyzer:(id)a0;

@end
