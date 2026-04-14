@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor

@property (weak, nonatomic) id<CSBiometricMatchMonitorDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)startObserving;
- (BOOL)getLastBiometricMatchEvent:(BOOL *)a0 atTime:(unsigned long long *)a1;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)a0;

@end
