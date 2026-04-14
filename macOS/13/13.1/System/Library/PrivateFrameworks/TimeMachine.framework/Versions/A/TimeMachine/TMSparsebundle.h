@class NSURL, NSString;

@interface TMSparsebundle : NSObject

@property (copy) NSURL *sparsebundleURL;
@property (readonly) NSString *displayName;
@property (readonly) BOOL isPurgeable;
@property (readonly) BOOL isPartiallyCreated;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *macAddress;

+ (BOOL)tryDiskImages2;
+ (BOOL)tryDiskImages1;
+ (id)sparsebundleMatchingHostUUIDs:(id)a0 orMACAddresses:(id)a1 inDirectory:(id)a2;
+ (id)_sparsebundleWithExtension:(id)a0 matchingHostUUIDs:(id)a1 orMACAddresses:(id)a2 inDirectory:(id)a3;
+ (id)sparsebundleMatchingThisComputerInDirectory:(id)a0;
+ (id)purgeSparsebundle:(id)a0 error:(id *)a1;
+ (id)_tmpNameForCreation;
+ (id)_fileSystemPersonalityForNewSparsebundles;
+ (unsigned long long)sizeLimitForSparsebundleInDirectory:(id)a0;
+ (id)createSparsebundleOnVolume:(id)a0 usingSystemKeychainAccount:(id)a1;

- (void).cxx_destruct;
- (BOOL)delete:(id *)a0;
- (id)_tokenURL;
- (BOOL)isImmutable;
- (id)initWithSparsebundleURL:(id)a0;
- (id)_timeMachineInfoURL;
- (id)_timeMachineInfoBackupURL;
- (id)_resultsURL;
- (id)_backupHistoryURL;
- (BOOL)setImmutable:(BOOL)a0;
- (id)readTimeMachineInfo;
- (BOOL)_writeAndFlushPropertyList:(id)a0 toURL:(id)a1;
- (BOOL)writeTimeMachineInfo:(id)a0;
- (BOOL)matchesHostUUID:(id)a0;
- (BOOL)matchesMACAddress:(id)a0;
- (BOOL)matchesThisComputer;
- (BOOL)matchesAnyHostUUIDs:(id)a0;
- (BOOL)_hideExtension;
- (id)updateAndRenameForThisComputer;
- (BOOL)writeBackupResultDictionary:(id)a0;
- (BOOL)writeBackupHistory:(id)a0;
- (void)_iterate:(unsigned int)a0 options:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)_bsdNameForMedia:(unsigned int)a0;
- (id)_imagePathForDrive:(unsigned int)a0;
- (id)_deviceNames;
- (id)_deviceNamesForSparsebundlePath:(id)a0;
- (void)_detachOrphanSparsebundles;
- (id)_backupDiskDescription;
- (id)backupDiskDevicePath;
- (id)backupDiskMountPoint;
- (BOOL)backupDiskIsWritable;
- (BOOL)backupDiskIsMountable;
- (BOOL)backupDiskIsHFS;
- (BOOL)backupDiskIsAPFS;
- (unsigned int)_encryptionStateForDrive:(unsigned int)a0;
- (unsigned int)encryptionState;
- (id)encryptionUUID:(id *)a0;
- (id)syncablePasswordID;
- (BOOL)setSyncablePasswordID:(id)a0;
- (BOOL)attachFileMode:(long long)a0 autoMount:(BOOL)a1 error:(id *)a2;
- (void)eject;
- (void)_ejectDeviceNames:(id)a0;
- (BOOL)unmountForce:(BOOL)a0;
- (BOOL)_unmountDeviceNames:(id)a0 force:(BOOL)a1;
- (int)healthCheckState;
- (BOOL)setHealthCheckState:(int)a0 extendedSkipInterval:(BOOL)a1;
- (BOOL)setHealthCheckState:(int)a0;
- (void)setHealthCheckStateToExtendedSkip;
- (BOOL)healthCheckExtendedSkip;
- (id)healthCheckDate;

@end
