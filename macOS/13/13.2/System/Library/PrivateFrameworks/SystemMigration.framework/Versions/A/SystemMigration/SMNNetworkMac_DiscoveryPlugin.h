@class NSObject;
@protocol OS_dispatch_queue;

@interface SMNNetworkMac_DiscoveryPlugin : SMSystemScanner_DiscoveryPlugin

@property (retain) NSObject<OS_dispatch_queue> *browserQueue;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)scannerState;
- (void)startDiscovery;
- (void)stopDiscovery;
- (void)addNonBonjourRemoteShare:(id)a0;
- (id)systemQueueName;
- (BOOL)requiresSystemRetention;
- (id)findParentOf:(id)a0;
- (void)registerChild:(id)a0 of:(id)a1;
- (void)performFinalCleanup;

@end
