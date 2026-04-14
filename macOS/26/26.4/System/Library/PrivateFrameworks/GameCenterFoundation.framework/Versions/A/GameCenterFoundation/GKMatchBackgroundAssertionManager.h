@class RBSAssertion;

@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) RBSAssertion *activeAssertion;

- (void)assertionWillInvalidate:(id)a0;
- (void)acquire;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end
