@class NSString, NFMultiDelegate;

@interface FCMultiNetworkBehaviorMonitor : NSObject <FCNetworkBehaviorMonitor>

@property (readonly, nonatomic) NFMultiDelegate *multiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMonitor:(id)a0;
- (void)removeMonitor:(id)a0;
- (id)init;
- (void)logNetworkEvent:(id)a0;
- (void).cxx_destruct;

@end
