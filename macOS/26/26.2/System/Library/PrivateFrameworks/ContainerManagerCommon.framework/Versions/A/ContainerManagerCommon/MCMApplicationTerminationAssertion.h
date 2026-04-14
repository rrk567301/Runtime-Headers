@class RBSTerminationAssertion;

@interface MCMApplicationTerminationAssertion : NSObject

@property (retain, nonatomic) RBSTerminationAssertion *termAssertion;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0 reason:(id)a1;

@end
