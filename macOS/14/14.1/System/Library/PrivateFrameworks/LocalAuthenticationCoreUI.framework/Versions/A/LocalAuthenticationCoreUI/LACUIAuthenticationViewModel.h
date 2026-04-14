@class LAContext, NSMutableSet;
@protocol LACUIAuthenticationViewModelDelegate;

@interface LACUIAuthenticationViewModel : NSObject <LAUIDelegate> {
    NSMutableSet *_pausedEvents;
    NSMutableSet *_activeEvents;
    BOOL _shouldBePaused;
    long long _lastSuccess;
    long long _kofnK;
}

@property (nonatomic) BOOL success;
@property (readonly, nonatomic) LAContext *context;
@property (weak, nonatomic) id<LACUIAuthenticationViewModelDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)viewDidLayoutWithInvalidDimensions;
- (void)viewVisibilityChangedToVisible:(BOOL)a0 withDescription:(id)a1;
- (void)viewWasDeallocated;
- (void)_anyEventWithParams:(id)a0;
- (BOOL)_biometryRunning;
- (void)_didSucceedWithEvent:(long long)a0;
- (void)_failAllMechanismsWithDescription:(id)a0;
- (void)_passcodeEvent:(long long)a0 withParams:(id)a1;
- (void)_toggleEventsWithDescription:(id)a0;
- (void)_touchIDEventWithParams:(id)a0;
- (void)_watchEventWithParams:(id)a0;
- (BOOL)_watchRunning;

@end
