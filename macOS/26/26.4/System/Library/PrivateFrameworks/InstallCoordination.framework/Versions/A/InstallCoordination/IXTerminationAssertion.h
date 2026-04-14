@class NSString;
@protocol IXTerminationAssertionProtocol;

@interface IXTerminationAssertion : NSObject <RBSTerminationAssertionObserving, IXTerminationAssertionWrapperProtocol>

@property (copy, nonatomic) id /* block */ acquisitionBlock;
@property (retain, nonatomic) id<IXTerminationAssertionProtocol> terminationAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (BOOL)acquireWithError:(id *)a0;
- (void)assertionTargetProcessDidExit:(id)a0;
- (void)acquireWithCompletion:(id /* block */)a0;
- (id)initWithBundleID:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2;
- (id)initWithBundleID:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 allowLaunchPredicate:(id)a3;
- (id)initWithBundleID:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 allowLaunchPredicate:(id)a3 creationBlock:(id /* block */)a4;
- (id)initWithBundleIDs:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2;
- (id)initWithBundleIDs:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 allowLaunchPredicate:(id)a3;
- (id)initWithBundleIDs:(id)a0 description:(id)a1 terminationResistance:(unsigned char)a2 allowLaunchPredicate:(id)a3 creationBlock:(id /* block */)a4;

@end
