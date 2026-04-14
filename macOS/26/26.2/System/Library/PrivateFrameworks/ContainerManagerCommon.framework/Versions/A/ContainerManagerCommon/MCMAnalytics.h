@class OS_dispatch_queue;

@interface MCMAnalytics : NSObject <MCMAnalytics>

@property (class, nonatomic, readonly) MCMAnalytics *sharedInstance;

@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (void).cxx_destruct;
- (id)init;
- (void)recordAmbiguousPersonaRequestWithIdentifier:(id)a0 proxiedIdentifier:(id)a1 proximateIdentifier:(id)a2 explicitPersonaType:(int)a3 legacyPersonaPolicy:(BOOL)a4 propagationFailed:(BOOL)a5 containerClass:(unsigned long long)a6;
- (void)recordAppGroupEventWithAuthResult:(unsigned long long)a0 clientIdentifier:(id)a1 groupIdentifier:(id)a2 teamIdentifier:(id)a3 isEntitled:(BOOL)a4;

@end
