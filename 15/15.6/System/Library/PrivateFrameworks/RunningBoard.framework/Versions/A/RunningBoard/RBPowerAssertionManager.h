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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)captureState;
- (void)addProcess:(id)a0;
- (char)_unitTest_hasPowerAssertionForProcess:(id)a0;
- (char)_unitTest_hasSystemPowerAssertion;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)a0;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (void)applySystemState:(id)a0;
- (void)didUpdateProcessStates:(id)a0;
- (void)removeProcess:(id)a0;
- (void)removeStateForProcessIdentity:(id)a0;

@end
