@class OS_dispatch_queue;

@interface MCMAnalytics : NSObject <MCMAnalytics>

@property (class, nonatomic, readonly) MCMAnalytics *sharedInstance;

@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (id)init;
- (void).cxx_destruct;
- (void)recordAppGroupEventWithAuthResult:(unsigned long long)a0 clientIdentifier:(id)a1 groupIdentifier:(id)a2 teamIdentifier:(id)a3 isEntitled:(BOOL)a4;

@end
