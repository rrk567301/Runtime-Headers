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

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(BOOL)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyObserverBacklightOn:(BOOL)a0 atHostTime:(unsigned long long)a1;
- (void)backlightOnAssertionReceived:(BOOL)a0 atHostTime:(unsigned long long)a1;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;

@end
