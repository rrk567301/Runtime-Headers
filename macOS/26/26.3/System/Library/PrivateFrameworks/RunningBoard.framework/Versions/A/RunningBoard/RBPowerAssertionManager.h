@class NSString, RBProcessMap, RBSystemPowerAssertion, NSObject;
@protocol RBPowerAssertionManagerDelegate, OS_dispatch_queue;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing> {
    RBProcessMap *_stateMap;
    RBProcessMap *_assertionMap;
    RBSystemPowerAssertion *_systemAssertion;
    unsigned long long _assertionCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<RBPowerAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (void)removeStateForProcessIdentity:(id)a0;
- (void)addProcess:(id)a0;
- (void)applySystemState:(id)a0;
- (id)captureState;
- (void)removeProcess:(id)a0;
- (id)init;
- (BOOL)_unitTest_hasPowerAssertionForProcess:(id)a0;
- (BOOL)_unitTest_hasSystemPowerAssertion;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (void)didUpdateProcessStates:(id)a0;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)a0;

@end
