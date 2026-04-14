@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archiveHomeDataLegacy:(id)a0;
+ (void)removeServerTokenDataFile;
+ (id)archiveCloudServerTokenData:(id)a0;
+ (id)decryptDataWithControllerKey:(id)a0 totalKeysFound:(unsigned long long *)a1 deleteExtraKeys:(BOOL)a2 allowControllerIdentifierToChange:(BOOL)a3 controllerIdentifierChanged:(BOOL *)a4 successfulKeyUserName:(id *)a5 error:(id *)a6;
+ (id)archiveHomeDataLegacy:(id)a0 toLocation:(id)a1;
+ (id)decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)controllerUsernameForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 fromLocation:(id)a2 successfulKeyUserName:(id *)a3 forHH2Migration:(BOOL)a4;
+ (void)archiveVendorStore:(id)a0;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 successfulKeyUserName:(id *)a2;
+ (id)encryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)archiveIDSDataSyncJournal:(id)a0;
+ (BOOL)archiveMetadata:(id)a0;
+ (id)unarchiveBulletinBoard;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (void)removeTransactionJournal;
+ (id)archiveHomeDataForTransaction:(id)a0;
+ (id)archiveHomeData:(id)a0 toLocation:(id)a1;
+ (id)serializeHomeData:(id)a0 localStorage:(BOOL)a1 remoteDeviceOnSameAccount:(BOOL)a2;
+ (BOOL)writeDictionary:(id)a0 toStorePath:(id)a1;
+ (BOOL)removeLegacyHomeArchive:(id *)a0;
+ (id)readDataFromPath:(id)a0;
+ (void)archiveBulletinBoard:(id)a0;
+ (id)logCategory;
+ (id)encryptDataWithControllerKey:(id)a0 error:(id *)a1;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2 createDirectoriesIfNeeded:(BOOL)a3;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (BOOL)hasControllerKeyWithUsername:(id)a0 error:(id *)a1;
+ (id)loadPlainMetadataDictionary;
+ (id)unarchiveVendorStore;
+ (void)cleanupKeysInStore;
+ (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (BOOL)deserializeHomeData:(id *)a0 usingLocalStorage:(BOOL)a1 fromData:(id)a2 forHH2Migration:(BOOL)a3;
+ (BOOL)deserializeHomeData:(id *)a0 localStorage:(BOOL)a1 fromData:(id)a2;
+ (id)unarchiveIDSDataSyncJournal;
+ (void)resetConfiguration:(unsigned long long)a0;

@end
