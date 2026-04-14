@class AXDispatchTimer;

@interface PAAccessoryManager : NSObject

@property (nonatomic) BOOL shouldSendUpdate;
@property (retain, nonatomic) AXDispatchTimer *pmeHysteresisTimer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)routesDidChange:(id)a0;
- (void)sendUpdateToAccessory;
- (void)sendPMEConfigurationToAccessory;

@end
