@class NSObject;
@protocol OS_dispatch_queue;

@interface SMNTimeCapsule_DiscoveryPlugin : SMSystemScanner_DiscoveryPlugin

@property (retain) NSObject<OS_dispatch_queue> *browserQueue;
@property (retain) NSObject<OS_dispatch_queue> *mountingSparsebundlesSerialQueue;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)scannerState;
- (void)startDiscovery;
- (void)stopDiscovery;
- (id)systemQueueName;
- (BOOL)requiresSystemRetention;
- (id)findParentOf:(id)a0;
- (void)registerChild:(id)a0 of:(id)a1;
- (void)performFinalCleanup;
- (void)scanMountedDisk:(id)a0;
- (void)updateLastKnownFinalSelectedSourceDiskDetails:(id)a0 lost:(BOOL)a1 forSystem:(id)a2 wasRegained:(BOOL)a3;
- (void)remoteShareDisappeared:(id)a0;
- (void)remoteTimeMachineBasedSystemDisappeared:(id)a0;
- (int)addSystemsFromTMDataVolume:(id)a0 andRemoteDiskID:(id)a1 andDADiskID:(id)a2 andLocalVolumeID:(id)a3;
- (id)addSystemsFromTMSparseBundles:(id)a0 onVolume:(id)a1 andRemoteDiskID:(id)a2 andDADiskID:(id)a3;
- (id)getVolumeCountsOfMachineStoresForSession:(id)a0 withMountPoint:(id)a1;
- (void)matchBackupToTMDisk:(id)a0 withLocalVolumeID:(id)a1;
- (id)createTMSystemforMountPoint:(id)a0 daDiskID:(id)a1 remoteDiskID:(id)a2 volumeURL:(id)a3;
- (id)createContainingSparseBundleSystemForPath:(id)a0;
- (id)timeCapsuleParentOfMountPoint:(id)a0;
- (void)unmountRemoteTMSharesExcluding:(id)a0;
- (void)unmountEverythingThatIsNotTheFinalizedSource;
- (BOOL)isLostSourceClassTMBased;
- (BOOL)isLostSourceALatestBackup;
- (BOOL)isLostSourceParentTMSparseBundleClass;

@end
