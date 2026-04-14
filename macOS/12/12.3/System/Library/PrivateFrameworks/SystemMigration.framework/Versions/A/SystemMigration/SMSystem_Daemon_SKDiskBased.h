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

- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)protocol;
- (id)initWithPath:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)matches:(id)a0;
- (unsigned long long)totalSize;
- (id)primaryIdentifier;
- (BOOL)isInternal;
- (BOOL)isCaseSensitive;
- (id)volumeName;
- (BOOL)isMounted;
- (unsigned long long)systemType;
- (unsigned long long)filesystemType;
- (unsigned long long)freeSpace;
- (unsigned long long)purgableSpace;
- (id)volumeIcon;
- (BOOL)enumeratesDirectlyFromDatavolume;
- (BOOL)isDefaultEffaceable;
- (id)fdeSignedUsers;
- (BOOL)hasPairedDataVolumeWithOutputDataIdentifier:(id *)a0;
- (BOOL)systemAndDataMounted;
- (double)estimatedTransferRate;
- (void)prepareSystem;
- (void)reclaimPurgableSpace;
- (BOOL)validateFDEPassword:(id)a0;
- (BOOL)isPasswordLocked;
- (void)scannerInit;
- (void)initSKDisk;
- (void)initPrimaryIdentifier;
- (void)determineEnrolledBetaProgram:(BOOL)a0;
- (void)determineDiskType;
- (id)storageKitUsersForUsers:(id)a0;
- (id)initWithSKDisk:(id)a0;
- (BOOL)encryptDiskWithUsers:(id)a0 iCloudUser:(id)a1 iCloudPassword:(id)a2 andBag:(id)a3 returningError:(id *)a4;
- (BOOL)addFDEUsers:(id)a0 removeUsers:(id)a1 diskUnlockPassword:(id)a2;

@end
