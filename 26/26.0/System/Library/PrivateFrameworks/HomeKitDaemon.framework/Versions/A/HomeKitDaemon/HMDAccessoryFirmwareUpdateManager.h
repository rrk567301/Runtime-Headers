@class UARPController, NSString, HMDAccessoryFirmwareUpdateConcurrencyLogEventManager, HMDHomeManager, HMFTimer, NSMutableDictionary, NSURL, HMDDefaultUARPControllerDelegate, NSObject, NSMapTable, HMDMatterUARPControllerDelegate;
@protocol HMDAccessoryFirmwareUpdateManagerWingman, OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager;
@property (readonly) id<HMDAccessoryFirmwareUpdateManagerWingman> wingman;
@property (retain, nonatomic) NSMapTable *registeredAccessories;
@property (retain, nonatomic) NSMutableDictionary *accessoryRetries;
@property (readonly, nonatomic) HMDDefaultUARPControllerDelegate *defaultUARPControllerDelegate;
@property (readonly, nonatomic) HMDMatterUARPControllerDelegate *matterUARPControllerDelegate;
@property (retain, nonatomic) HMFTimer *statusTimer;
@property (readonly, nonatomic) UARPController *defaultUARPController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSURL *documentationPath;
@property (readonly) BOOL supportsFirmwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isFirmwareUpdateRetryAllowedForAccessory:(id)a0 forAsset:(id)a1;
- (id)initWithHomeManager:(id)a0 wingman:(id)a1;
- (void)dealloc;
- (id)changeAccessory:(id)a0 source:(long long)a1 path:(id)a2 documentationPath:(id)a3 userInitiatedStaging:(BOOL)a4;
- (BOOL)startUARPPacketCapture:(id)a0;
- (void)startStatusTimer;
- (void)timerDidFire:(id)a0;
- (void)unregisterAccessory:(id)a0;
- (id)UARPAccessoryForHMDAccessory:(id)a0;
- (id)findHMDHAPAccessoryWithUARPAccessory:(id)a0;
- (id)registerAndCreateSessionForAccessory:(id)a0 updateUARPParameters:(BOOL)a1;
- (void)rescindStagedAsset:(id)a0 completion:(id /* block */)a1;
- (void)resetFirmwareUpdateAccessoryRetryTracking:(id)a0 forAsset:(id)a1;
- (id)availableSoftwareAssetForMatterAccessory:(id)a0 error:(id *)a1;
- (id)matterUARPController;
- (id)init;
- (void)stopUARPPacketCapture;
- (BOOL)checkForUpdateForAccessory:(id)a0;
- (id)addSessionForUARPAccessory:(id)a0;
- (BOOL)_registerAccessory:(id)a0 source:(long long)a1 path:(id)a2;
- (void)_handleMatterSettingsUpdateNotification:(id)a0;
- (id)sessionForAccessory:(id)a0;
- (BOOL)registerAccessory:(id)a0;
- (void)_handleAccessoryFirmwareVersionUpdateNotification:(id)a0;
- (BOOL)hasReachedMaximumFirmwareUpdateRetriesForAccessory:(id)a0 assetID:(id)a1;
- (long long)defaultUpdateAssetSourceWithAccessory:(id)a0;
- (void)handleMatterSettingsUpdateNotification:(id)a0;
- (void)handleHomeAccessoryRemovedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (id)UARPControllerForAccessory:(id)a0;
- (id)sessionForUARPAccessory:(id)a0;
- (long long)defaultProductDataUpdateAssetSource;
- (void)_handleHomeAccessoryRemovedNotification:(id)a0;
- (void)handleAccessoryFirmwareVersionUpdateNotification:(id)a0;
- (void)removeSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessoryRegistered:(id)a0;

@end
