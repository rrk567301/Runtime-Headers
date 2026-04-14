@class RBSAssertion;

@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) RBSAssertion *activeAssertion;

- (void)assertionWillInvalidate:(id)a0;
- (void)acquire;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
