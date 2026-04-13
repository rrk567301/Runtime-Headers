@class NSURL, NSString;

@interface TMSparsebundle : NSObject

@property (copy) NSURL *sparsebundleURL;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *macAddress;

+ (id)_sparsebundleWithExtension:(id)a0 matchingHostUUIDs:(id)a1 orMACAddresses:(id)a2 inDirectory:(id)a3;
+ (id)sparsebundleMatchingHostUUIDs:(id)a0 orMACAddresses:(id)a1 inDirectory:(id)a2;
+ (id)_fileSystemPersonalityForNewSparsebundles;
+ (unsigned long long)sizeLimitForSparsebundleInDirectory:(id)a0;
+ (id)_tmpNameForCreation;
+ (BOOL)tryDiskImages2;
+ (BOOL)tryDiskImages1;
+ (id)purgeSparsebundle:(id)a0 error:(id *)a1;
+ (id)sparsebundleMatchingThisComputerInDirectory:(id)a0;
+ (id)purgeableSparsebundlesInDirectory:(id)a0;
+ (id)createSparsebundleOnVolume:(id)a0 usingSystemKeychainAccount:(id)a1;

- (void).cxx_destruct;
- (BOOL)delete:(id *)a0;
- (BOOL)isImmutable;
- (id)initWithSparsebundleURL:(id)a0;
- (BOOL)_isPurgeable;
- (BOOL)_isPartiallyCreated;
- (BOOL)setHealthCheckState:(int)a0 extendedSkipInterval:(BOOL)a1;
- (id)updateAndRenameForThisComputer;
- (id)_timeMachineInfoURL;
- (id)_tokenURL;
- (id)_timeMachineInfoBackupURL;
- (BOOL)setImmutable:(BOOL)a0;
- (BOOL)_writeAndFlushPropertyList:(id)a0 toURL:(id)a1;
- (id)readTimeMachineInfo;
- (BOOL)writeTimeMachineInfo:(id)a0;
- (id)_deviceNamesForSparsebundlePath:(id)a0;
- (id)_resultsURL;
- (id)_backupHistoryURL;
- (id)_imagePathForDrive:(unsigned int)a0;
- (id)_bsdNameForMedia:(unsigned int)a0;
- (void)_iterate:(unsigned int)a0 options:(BOOL)a1 usingBlock:(id /* block */)a2;
- (BOOL)_unmountDeviceNames:(id)a0 force:(BOOL)a1;
- (void)_ejectDeviceNames:(id)a0;
- (id)_deviceNames;
- (id)_backupDiskDescription;
- (id)backupDiskDevicePath;
- (unsigned int)_encryptionStateForDrive:(unsigned int)a0;
- (void)_detachOrphanSparsebundles;
- (BOOL)_hideExtension;
- (BOOL)writeBackupResultDictionary:(id)a0;
- (BOOL)writeBackupHistory:(id)a0;
- (id)backupDiskMountPoint;
- (BOOL)backupDiskIsWritable;
- (BOOL)backupDiskIsMountable;
- (BOOL)backupDiskIsHFS;
- (BOOL)backupDiskIsAPFS;
- (unsigned int)encryptionState;
- (id)encryptionUUID:(id *)a0;
- (BOOL)attachFileMode:(long long)a0 autoMount:(BOOL)a1 error:(id *)a2;
- (void)eject;
- (BOOL)unmountForce:(BOOL)a0;
- (int)healthCheckState;
- (BOOL)setHealthCheckState:(int)a0;
- (void)setHealthCheckStateToExtendedSkip;
- (BOOL)healthCheckExtendedSkip;
- (id)healthCheckDate;

@end
