@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor

@property (weak, nonatomic) id<CSBiometricMatchMonitorDelegate> delegate;

+ (id)sharedInstance;

- (void)startObserving;
- (void).cxx_destruct;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)a0;
- (BOOL)getLastBiometricMatchEvent:(BOOL *)a0 atTime:(unsigned long long *)a1;

@end
