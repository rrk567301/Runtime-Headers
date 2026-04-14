@class NSString, RBSTerminationAssertion, NSObject;
@protocol OS_dispatch_semaphore;

@interface IXTerminationAssertion : NSObject <RBSTerminationAssertionObserving>

@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *waitForAssertionSemaphore;
@property (retain, nonatomic) RBSTerminationAssertion *termAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assertionTargetProcessDidExit:(id)a0;
- (id)_terminationAssertionForBundleIDs:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 error:(id *)a3;
- (BOOL)acquireAssertion:(id *)a0;
- (id)initForBundleIDs:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 error:(id *)a3;

@end
