@class RBSAssertion;

@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) RBSAssertion *activeAssertion;

- (void)acquire;
- (void)assertionWillInvalidate:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
