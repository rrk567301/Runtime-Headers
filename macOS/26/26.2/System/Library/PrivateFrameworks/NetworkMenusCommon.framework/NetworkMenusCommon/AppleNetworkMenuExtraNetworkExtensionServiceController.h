@class NSNumber, NEConfiguration;

@interface AppleNetworkMenuExtraNetworkExtensionServiceController : AppleNetworkMenuExtraServiceController

@property void *session;
@property (retain) NSNumber *startTime;
@property (retain) NEConfiguration *configuration;

- (void)disconnect;
- (id)applicationDisplayName;
- (id)connectionStartTime;
- (void)connect;
- (BOOL)isConnected;
- (int)connectionType;
- (id)serviceID;
- (void)refreshConnectionState;
- (id)serviceName;
- (int)connectionState;
- (void)dealloc;
- (void)refreshStatus;
- (void)a_connectOrDisconnect:(id)a0;
- (void)prepareToUnload;
- (int)getStateForSessionStatus:(int)a0;
- (void)handleStateChanged:(int)a0;
- (id)initWithConfiguration:(id)a0 andBundle:(id)a1;
- (void)refreshHeaderView;
- (void)refreshMenuItems;
- (void)setupEventCallbackWithBlock:(id /* block */)a0;

@end
