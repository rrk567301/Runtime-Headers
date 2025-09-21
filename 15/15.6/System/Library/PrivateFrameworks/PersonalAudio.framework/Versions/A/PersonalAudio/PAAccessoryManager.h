@class AXDispatchTimer;

@interface PAAccessoryManager : NSObject

@property (nonatomic) char shouldSendUpdate;
@property (retain, nonatomic) AXDispatchTimer *pmeHysteresisTimer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)routesDidChange:(id)a0;
- (void)sendUpdateToAccessory;
- (void)sendPMEConfigurationToAccessory;

@end
