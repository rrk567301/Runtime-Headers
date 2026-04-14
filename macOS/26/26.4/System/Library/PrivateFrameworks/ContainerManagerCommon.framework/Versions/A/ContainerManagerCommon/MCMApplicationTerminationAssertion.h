@class RBSTerminationAssertion;

@interface MCMApplicationTerminationAssertion : NSObject

@property (retain, nonatomic) RBSTerminationAssertion *termAssertion;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0 reason:(id)a1;

@end
