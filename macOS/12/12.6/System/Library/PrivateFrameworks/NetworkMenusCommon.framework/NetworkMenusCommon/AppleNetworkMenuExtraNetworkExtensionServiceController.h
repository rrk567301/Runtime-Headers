@class NSNumber, NEConfiguration;

@interface AppleNetworkMenuExtraNetworkExtensionServiceController : AppleNetworkMenuExtraServiceController

@property void *session;
@property (retain) NSNumber *startTime;
@property (retain) NEConfiguration *configuration;

- (void)dealloc;
- (int)connectionType;
- (void)disconnect;
- (id)serviceName;
- (void)connect;
- (BOOL)isConnected;
- (int)connectionState;
- (id)applicationDisplayName;
- (id)serviceID;
- (id)connectionStartTime;
- (void)refreshConnectionState;
- (void)refreshStatus;
- (void)handleStateChanged:(int)a0;
- (int)getStateForSessionStatus:(int)a0;
- (void)refreshHeaderView;
- (void)refreshMenuItems;
- (void)prepareToUnload;
- (id)initWithConfiguration:(id)a0 andBundle:(id)a1;
- (void)setupEventCallbackWithBlock:(id /* block */)a0;
- (void)a_connectOrDisconnect:(id)a0;

@end
