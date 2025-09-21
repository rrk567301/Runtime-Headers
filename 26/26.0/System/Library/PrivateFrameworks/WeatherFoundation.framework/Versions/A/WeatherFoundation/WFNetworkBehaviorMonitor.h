@class NSHashTable;

@interface WFNetworkBehaviorMonitor : NSObject

@property (readonly, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)logNetworkEvent:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
