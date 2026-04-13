@class UARPController, NSString, HMFTimer, HMDHomeManager, HMDAccessoryFirmwareUpdateConcurrencyLogEventManager, NSMutableDictionary, NSURL, NSObject, NSMapTable, HMFUnfairLock;
@protocol HMDAccessoryFirmwareUpdateManagerWingman, OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFLogging, UARPControllerDelegateProtocol, HMFTimerDelegate>

@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager;
@property (readonly) id<HMDAccessoryFirmwareUpdateManagerWingman> wingman;
@property (retain, nonatomic) NSMapTable *registeredAccessories;
@property (retain, nonatomic) NSMutableDictionary *accessoryRetries;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFTimer *statusTimer;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) UARPController *uarpController;
@property (readonly, nonatomic) NSURL *documentationPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)stagedFirmwareApplicationComplete:(id)a0 withStatus:(unsigned long long)a1;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)assetSolicitationComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)firmwareUpdateResult:(id)a0 vendorSpecificStatus:(unsigned int)a1 error:(id)a2;
- (void)assetSolicitationProgress:(id)a0 assetID:(id)a1 bytesReceived:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)timerDidFire:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (id)UARPAccessoryForHMDAccessory:(id)a0;
- (id)addSessionForUARPAccessory:(id)a0;
- (id)changeAccessory:(id)a0 source:(long long)a1 path:(id)a2 documentationPath:(id)a3 userInitiatedStaging:(BOOL)a4;
- (void)rescindStagedAsset:(id)a0 completion:(id /* block */)a1;
- (id)sessionForAccessory:(id)a0;
- (BOOL)registerAccessory:(id)a0;
- (void)unregisterAccessory:(id)a0;
- (void)resetFirmwareUpdateAccessoryRetryTracking:(id)a0 forAsset:(id)a1;
- (BOOL)checkForUpdateForAccessory:(id)a0;
- (BOOL)isFirmwareUpdateRetryAllowedForAccessory:(id)a0 forAsset:(id)a1;
- (id)initWithHomeManager:(id)a0 wingman:(id)a1;
- (BOOL)deviceSupportsFirmwareUpdate;
- (BOOL)isAccessoryRegistered:(id)a0;
- (void)handleAccessoryFirmwareVersionUpdateNotification:(id)a0;
- (void)_handleAccessoryFirmwareVersionUpdateNotification:(id)a0;
- (long long)defaultUpdateAssetSourceWithAccessory:(id)a0;
- (long long)defaultProductDataUpdateAssetSource;
- (BOOL)_registerAccessory:(id)a0 source:(long long)a1 path:(id)a2;
- (void)handleHomeAccessoryRemovedNotification:(id)a0;
- (void)_handleHomeAccessoryRemovedNotification:(id)a0;
- (void)startStatusTimer;
- (id)sessionForUARPAccessory:(id)a0;
- (id)findHMDHAPAccessoryWithUARPAccessory:(id)a0;
- (BOOL)hasAccessoryUsedAllFirmwareUpdateRetries:(id)a0 forAsset:(id)a1;
- (BOOL)startUARPPacketCapture:(id)a0;
- (void)stopUARPPacketCapture;

@end
