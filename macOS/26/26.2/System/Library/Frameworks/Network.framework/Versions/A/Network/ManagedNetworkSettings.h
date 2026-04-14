@class NSObject;
@protocol OS_dispatch_queue;

@interface ManagedNetworkSettings : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMNS;

- (void)handleEvent:(id)a0;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void).cxx_destruct;
- (id)init;

@end
