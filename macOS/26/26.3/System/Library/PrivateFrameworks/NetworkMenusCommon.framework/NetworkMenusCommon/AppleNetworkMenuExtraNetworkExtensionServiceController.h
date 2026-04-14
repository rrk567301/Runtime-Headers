@class NSNumber, NEConfiguration;

@interface AppleNetworkMenuExtraNetworkExtensionServiceController : AppleNetworkMenuExtraServiceController

@property void *session;
@property (retain) NSNumber *startTime;
@property (retain) NEConfiguration *configuration;

- (id)serviceID;
- (id)applicationDisplayName;
- (void)disconnect;
- (int)connectionType;
- (BOOL)isConnected;
- (void)connect;
- (id)connectionStartTime;
- (id)serviceName;
- (int)connectionState;
- (void)dealloc;
- (void)refreshConnectionState;
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
