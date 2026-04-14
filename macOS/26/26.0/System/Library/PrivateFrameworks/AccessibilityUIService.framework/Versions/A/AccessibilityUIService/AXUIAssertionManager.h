@class AXDispatchTimer, NSMutableSet, RBSAssertion;

@interface AXUIAssertionManager : NSObject

@property (retain, nonatomic) RBSAssertion *assertionUI;
@property (retain, nonatomic) RBSAssertion *assertionBackground;
@property (retain, nonatomic) AXDispatchTimer *timerUI;
@property (retain, nonatomic) AXDispatchTimer *timerBackground;
@property (retain, nonatomic) NSMutableSet *clientsWithUIAssertion;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateAssertion;
- (void)_invalidateAssertionUI;
- (id)_serviceClientIDForService:(id)a0 clientIdentifier:(id)a1;
- (void)acquireAssertionIfNeeded;
- (void)acquireAssertionUIIfNeeded;
- (void)acquireAssertionUIIfNeededForService:(id)a0 clientIdentifier:(id)a1;
- (void)invalidateAssertionIfNeeded;
- (void)invalidateAssertionUIIfNeeded;
- (void)invalidateAssertionUIIfNeededForService:(id)a0 clientIdentifier:(id)a1;

@end
