@class SPBeaconManagerSimpleBeaconUpdateInterface, SPLocalBeaconManager, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SPBeaconManager : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) FMXPCServiceDescription *userAgentServiceDescription;
@property (retain, nonatomic) FMXPCSession *userAgentSession;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManagerSimpleBeaconUpdateInterface *simpleBeaconUpdateInterface;
@property (retain, nonatomic) SPLocalBeaconManager *localBeaconingManager;
@property (copy, nonatomic) id /* block */ stateChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ statusChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ beaconingKeyChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ nearbyTokensChangedBlockWithCompletion;

- (void)setCurrentWildKeyIndex:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)setRole:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)connectionTokensForBeaconUUID:(id)a0 completion:(id /* block */)a1;
- (void)unacceptedBeaconsWithCompletion:(id /* block */)a0;
- (void)allBeaconsOfTypes:(id)a0 completion:(id /* block */)a1;
- (void)stopUpdatingSimpleBeaconsWithCompletion:(id /* block */)a0;
- (void)fetchKeyMapFileDescriptorForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)createKeyReconcilerWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)beaconingKeysForUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)fetchFirmwareVersionForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)allBeaconsOfTypes:(id)a0 includeDupes:(BOOL)a1 includeHidden:(BOOL)a2 completion:(id /* block */)a3;
- (void)ownedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)notificationBeaconForSubscriptionId:(id)a0 completion:(id /* block */)a1;
- (void)isLPEMModeSupported:(id /* block */)a0;
- (void)createDuplicateBeaconsForBeacon:(id)a0 skipGroupIdentifier:(BOOL)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)removeDuplicateBeaconsWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)postedLocalNotifyWhenFoundNotificationForUUID:(id)a0 completion:(id /* block */)a1;
- (void)beaconForUUID:(id)a0 completion:(id /* block */)a1;
- (void)allBeaconsOfType:(id)a0 completion:(id /* block */)a1;
- (void)setSuppressLPEMBeaconing:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateObfuscatedIdentifierWithCompletion:(id /* block */)a0;
- (void)allBeaconsWithCompletion:(id /* block */)a0;
- (void)setUserHasAcknowledgedFindMy:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;
- (void)setAlignmentUncertainty:(double)a0 atIndex:(unsigned long long)a1 date:(id)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)userHasAcknowledgeFindMyWithCompletion:(id /* block */)a0;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateBeacon:(id)a0 updates:(id)a1 completion:(id /* block */)a2;
- (void)connectionTokensForBeaconUUID:(id)a0 criteria:(id)a1 completion:(id /* block */)a2;
- (id)remoteInterface;
- (void)repairDataStore:(id /* block */)a0;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1;
- (void)keySyncMetadataWithcompletion:(id /* block */)a0;
- (void)roleCategoriesWithCompletion:(id /* block */)a0;
- (void)setKeyRollInterval:(unsigned long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)startUpdatingSimpleBeaconsWithContext:(id)a0 collectionDifference:(id /* block */)a1 completion:(id /* block */)a2;
- (void)connectionTokensForBeaconUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)allBeaconingKeysForUUID:(id)a0 dateInterval:(id)a1 forceGenerate:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchUserStatsForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)createOwnedDeviceKeyRecordForUUID:(id)a0 completion:(id /* block */)a1;
- (void)setWildKeyBase:(unsigned long long)a0 interval:(unsigned long long)a1 fallback:(unsigned long long)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)submitDeviceEvent:(id)a0 source:(unsigned int)a1 attachedTo:(id)a2 completion:(id /* block */)a3;
- (void)purgeOwnedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)allDuriansWithCompletion:(id /* block */)a0;

@end
