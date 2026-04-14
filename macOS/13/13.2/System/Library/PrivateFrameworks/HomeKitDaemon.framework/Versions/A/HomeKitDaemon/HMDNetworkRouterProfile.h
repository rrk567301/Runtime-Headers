@interface HMDNetworkRouterProfile : HMDAccessoryProfile

@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) unsigned long long wanStatus;
@property (nonatomic) long long routerStatus;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)unconfigure;
- (void)registerForMessages;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (id)runtimeState;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleInitialState;
- (void)handleAccessoryIsReachable:(id)a0;
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)a0;
- (id)initWithRouterService:(id)a0 msgDispatcher:(id)a1;
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)a0;
- (void)_updateRouterStatus:(long long)a0;
- (void)_updateWANStatus:(unsigned long long)a0;
- (void)__handleNetworkAccessViolationUpdate:(id)a0;

@end
