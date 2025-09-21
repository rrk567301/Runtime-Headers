@class NSString, SKAPFSDisk, SKDisk, SKBindableDisk;
@protocol SKEncryptedDiskProtocol;

@interface SMSystem_Daemon_SKDiskBased : SMSystem_Daemon

@property (retain) SKDisk *skDisk;
@property (weak) SKDisk<SKEncryptedDiskProtocol> *encryptedSKDisk;
@property (weak) SKAPFSDisk *apfsSKDisk;
@property (weak) SKAPFSDisk *dataVolume;
@property (weak) SKAPFSDisk *systemVolume;
@property (retain) SKBindableDisk *bindableSKDisk;
@property (retain) SKBindableDisk *bindableDataVolume;
@property (retain) id cachedPrimaryIdentifier;
@property (retain) NSString *deviceBus;
@property (retain) NSString *deviceModelName;
@property (readonly, getter=isEncrypted) BOOL encrypted;

+ (unsigned long long)requiredScannerState;

- (id)initWithPath:(id)a0;
- (BOOL)isInternal;
- (unsigned long long)purgableSpace;
- (BOOL)isCaseSensitive;
- (void)invalidate;
- (id)description;
- (unsigned long long)totalSize;
- (id)protocol;
- (unsigned long long)freeSpace;
- (BOOL)matches:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)primaryIdentifier;
- (void).cxx_destruct;
- (BOOL)isMounted;
- (id)volumeName;
- (unsigned long long)systemType;
- (unsigned long long)filesystemType;
- (void)determineFileProviderBusyStatus;
- (id)initWithSKDisk:(id)a0;
- (BOOL)addFDEUsers:(id)a0 removeUsers:(id)a1 diskUnlockPassword:(id)a2;
- (BOOL)canCheckIfTargetIsAPFS;
- (void)determineDiskType;
- (void)determineEnrolledBetaProgram:(BOOL)a0;
- (BOOL)encryptDiskWithUsers:(id)a0 iCloudUser:(id)a1 iCloudPassword:(id)a2 andBag:(id)a3 returningError:(id *)a4;
- (BOOL)enumeratesDirectlyFromDatavolume;
- (double)estimatedTransferRate;
- (id)fdeSignedUsers;
- (BOOL)hasPairedDataVolumeWithOutputDataIdentifier:(id *)a0;
- (void)initPrimaryIdentifier;
- (void)initSKDisk;
- (BOOL)isDefaultEffaceable;
- (BOOL)isPasswordLocked;
- (void)prepareSystem;
- (void)reclaimPurgableSpace;
- (void)scannerInit;
- (id)storageKitUsersForUsers:(id)a0;
- (BOOL)systemAndDataMounted;
- (BOOL)validateFDEPassword:(id)a0;
- (id)volumeIcon;

@end
