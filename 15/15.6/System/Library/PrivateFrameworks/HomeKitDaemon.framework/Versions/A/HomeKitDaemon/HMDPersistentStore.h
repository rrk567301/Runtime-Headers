@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)resetConfiguration:(unsigned long long)a0;
+ (id)decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)encryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (char)deserializeHomeData:(id *)a0 usingLocalStorage:(char)a1 fromData:(id)a2 forHH2Migration:(char)a3;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2 createDirectoriesIfNeeded:(char)a3;
+ (void)archiveBulletinBoard:(id)a0;
+ (id)archiveCloudServerTokenData:(id)a0;
+ (id)archiveHomeData:(id)a0 toLocation:(id)a1;
+ (id)archiveHomeDataForTransaction:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0 toLocation:(id)a1;
+ (id)archiveIDSDataSyncJournal:(id)a0;
+ (char)archiveMetadata:(id)a0;
+ (void)archiveVendorStore:(id)a0;
+ (void)cleanupKeysInStore;
+ (id)controllerUsernameForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)decryptDataWithControllerKey:(id)a0 totalKeysFound:(unsigned long long *)a1 deleteExtraKeys:(char)a2 allowControllerIdentifierToChange:(char)a3 controllerIdentifierChanged:(char *)a4 successfulKeyUserName:(id *)a5 error:(id *)a6;
+ (char)deserializeHomeData:(id *)a0 localStorage:(char)a1 fromData:(id)a2;
+ (id)encryptDataWithControllerKey:(id)a0 error:(id *)a1;
+ (char)hasControllerKeyWithUsername:(id)a0 error:(id *)a1;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (id)readDataFromPath:(id)a0;
+ (char)removeLegacyHomeArchive:(id *)a0;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (id)serializeHomeData:(id)a0 localStorage:(char)a1 remoteDeviceOnSameAccount:(char)a2;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(char *)a1 fromLocation:(id)a2 successfulKeyUserName:(id *)a3 forHH2Migration:(char)a4;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(char *)a1 successfulKeyUserName:(id *)a2;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (char)writeDictionary:(id)a0 toStorePath:(id)a1;

@end
