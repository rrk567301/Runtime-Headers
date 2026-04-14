@class AXDispatchTimer;

@interface PAAccessoryManager : NSObject

@property (nonatomic) BOOL shouldSendUpdate;
@property (retain, nonatomic) AXDispatchTimer *pmeHysteresisTimer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)routesDidChange:(id)a0;
- (void)sendUpdateToAccessory;
- (void)sendPMEConfigurationToAccessory:(BOOL)a0;

@end
