@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) long long satelliteStatus;
@property (nonatomic) unsigned long long networkStatus;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)_registerForNotifications;
- (void)unconfigure;
- (void)registerForMessages;
- (id)runtimeState;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (id)initWithRouterSatelliteService:(id)a0 msgDispatcher:(id)a1;
- (void)handleInitialState;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)__handleAccessoryConnected;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)a0;
- (void)_updateNetworkStatus;
- (void)__updateSatelliteStatus:(id)a0;
- (void)_handleCharacteristicsChangedPayload:(id)a0;

@end
