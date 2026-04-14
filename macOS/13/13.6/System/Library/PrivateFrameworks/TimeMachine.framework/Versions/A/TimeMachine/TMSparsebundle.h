@class NSURL, NSString;

@interface TMSparsebundle : NSObject

@property (copy) NSURL *sparsebundleURL;
@property (readonly) NSString *displayName;
@property (readonly) BOOL isPurgeable;
@property (readonly) BOOL isPartiallyCreated;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *macAddress;

+ (id)_fileSystemPersonalityForNewSparsebundles;
+ (id)_sparsebundleWithExtension:(id)a0 matchingHostUUIDs:(id)a1 orMACAddresses:(id)a2 inDirectory:(id)a3;
+ (id)_tmpNameForCreation;
+ (id)createSparsebundleOnVolume:(id)a0 usingSystemKeychainAccount:(id)a1;
+ (id)purgeSparsebundle:(id)a0 error:(id *)a1;
+ (unsigned long long)sizeLimitForSparsebundleInDirectory:(id)a0;
+ (id)sparsebundleMatchingHostUUIDs:(id)a0 orMACAddresses:(id)a1 inDirectory:(id)a2;
+ (id)sparsebundleMatchingThisComputerInDirectory:(id)a0;
+ (BOOL)tryDiskImages1;
+ (BOOL)tryDiskImages2;

- (void).cxx_destruct;
- (BOOL)delete:(id *)a0;
- (id)_tokenURL;
- (BOOL)isImmutable;
- (BOOL)backupDiskIsHFS;
- (unsigned int)encryptionState;
- (id)healthCheckDate;
- (BOOL)attachFileMode:(long long)a0 autoMount:(BOOL)a1 error:(id *)a2;
- (id)encryptionUUID:(id *)a0;
- (id)_backupDiskDescription;
- (id)_backupHistoryURL;
- (id)_bsdNameForMedia:(unsigned int)a0;
- (void)_detachOrphanSparsebundles;
- (id)_deviceNames;
- (id)_deviceNamesForSparsebundlePath:(id)a0;
- (void)_ejectDeviceNames:(id)a0;
- (unsigned int)_encryptionStateForDrive:(unsigned int)a0;
- (BOOL)_hideExtension;
- (id)_imagePathForDrive:(unsigned int)a0;
- (void)_iterate:(unsigned int)a0 options:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)_resultsURL;
- (id)_timeMachineInfoBackupURL;
- (id)_timeMachineInfoURL;
- (BOOL)_unmountDeviceNames:(id)a0 force:(BOOL)a1;
- (BOOL)_writeAndFlushPropertyList:(id)a0 toURL:(id)a1;
- (id)backupDiskDevicePath;
- (BOOL)backupDiskIsAPFS;
- (BOOL)backupDiskIsMountable;
- (BOOL)backupDiskIsWritable;
- (id)backupDiskMountPoint;
- (void)eject;
- (BOOL)healthCheckExtendedSkip;
- (int)healthCheckState;
- (id)initWithSparsebundleURL:(id)a0;
- (BOOL)matchesAnyHostUUIDs:(id)a0;
- (BOOL)matchesHostUUID:(id)a0;
- (BOOL)matchesMACAddress:(id)a0;
- (BOOL)matchesThisComputer;
- (id)readTimeMachineInfo;
- (BOOL)setHealthCheckState:(int)a0;
- (BOOL)setHealthCheckState:(int)a0 extendedSkipInterval:(BOOL)a1;
- (void)setHealthCheckStateToExtendedSkip;
- (BOOL)setImmutable:(BOOL)a0;
- (BOOL)setSyncablePasswordID:(id)a0;
- (id)syncablePasswordID;
- (BOOL)unmountForce:(BOOL)a0;
- (id)updateAndRenameForThisComputer;
- (BOOL)writeBackupHistory:(id)a0;
- (BOOL)writeBackupResultDictionary:(id)a0;
- (BOOL)writeTimeMachineInfo:(id)a0;

@end
