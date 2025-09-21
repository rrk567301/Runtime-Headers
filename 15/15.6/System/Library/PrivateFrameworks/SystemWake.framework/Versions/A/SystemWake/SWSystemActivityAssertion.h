@class NSString, BSAbsoluteMachTimer, SWSystemSleepMonitor;
@protocol SWSystemActivityProviding;

@interface SWSystemActivityAssertion : NSObject <SWSystemSleepObserver, SWSystemActivityAssertionConfiguring_Internal, BSInvalidatable> {
    NSString *_identifier;
    BSAbsoluteMachTimer *_lock_timeoutTimer;
    SWSystemSleepMonitor *_sleepMonitor;
    id<SWSystemActivityProviding> _provider;
    unsigned int _lock_assertionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _lock_acquisitionHandler;
    unsigned long long _lock_startKernelAPWakeTime;
    unsigned long long _lock_state;
    double _lock_timeout;
    char _initializing;
    char _acquireWaitsToAbortSleepRequested;
    char _acquireWaitsToAbortSleepImminent;
    char _lock_wasSleepImminent;
    char _lock_didFailToRevertPendingSleep;
    char _lock_clientDidInvalidate;
}

@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (void)acquireWithTimeout:(double)a0 handler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 configurator:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 internalConfigurator:(id /* block */)a1;
- (void)setAcquireWaitsToAbortSleepImminent:(char)a0;
- (void)setAcquireWaitsToAbortSleepRequested:(char)a0;
- (void)setSleepMonitor:(id)a0;
- (void)setSystemActivityProvider:(id)a0;
- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void)systemSleepMonitorSleepRequestAborted:(id)a0;

@end
