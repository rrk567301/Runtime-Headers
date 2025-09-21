@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSClientXPCConnectionDelegate> {
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isEnabled;
- (void)_stopMonitoring;
- (void)_notifyObserver:(char)a0;
- (void)_notifyObserverBacklightOn:(char)a0 atHostTime:(unsigned long long)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)backlightOnAssertionReceived:(char)a0 atHostTime:(unsigned long long)a1;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;

@end
