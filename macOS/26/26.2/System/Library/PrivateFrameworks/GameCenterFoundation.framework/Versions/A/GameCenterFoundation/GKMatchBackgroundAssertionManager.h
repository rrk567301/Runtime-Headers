@class RBSAssertion;

@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) RBSAssertion *activeAssertion;

- (void)invalidate;
- (void)acquire;
- (void)assertionWillInvalidate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
