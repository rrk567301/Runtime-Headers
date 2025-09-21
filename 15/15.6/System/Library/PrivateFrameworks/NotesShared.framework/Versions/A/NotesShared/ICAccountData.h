@class ICTTMergeableWallClockValue, NSString, CKRecordID, NSData, ICAccount, CKRecord, NSManagedObjectID;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (class, readonly, nonatomic) char supportsUserSpecificRecords;

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, nonatomic) char needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) char wantsUserSpecificRecord;
@property (readonly, copy, nonatomic) NSString *userSpecificRecordType;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, retain, nonatomic) CKRecord *userSpecificServerRecord;
@property (readonly, nonatomic) char needsToBeDeletedFromCloud;
@property (readonly, nonatomic) char needsToBePushedToCloud;
@property (readonly, nonatomic) char needsToBeFetchedFromCloud;
@property (readonly, nonatomic) char isInICloudAccount;
@property (readonly, nonatomic) char isValidObject;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long databaseScope;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;
@property (nonatomic) short lockedNotesMode;
@property (nonatomic) char supportsV1Neo;
@property (copy, nonatomic) NSData *cryptoPassphraseVerifier;
@property (readonly, copy, nonatomic) ICTTMergeableWallClockValue *mergeableCryptoPassphraseVerifier;

+ (id)accountDataWithIdentifier:(id)a0 context:(id)a1;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataForAccount:(id)a0;
+ (id)newAccountDataWithIdentifier:(id)a0 account:(id)a1;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;

- (char)isDeletable;
- (id)recordName;
- (id)recordZoneName;
- (id)cloudAccount;
- (id)cryptoPassphraseVerifier;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (char)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (char)mergeWithMergeableData:(id)a0;
- (void)saveMergeableDataIfNeeded;
- (void)setCryptoPassphraseVerifier:(id)a0;
- (void)updateChangeCountWithReason:(id)a0;
- (void)updateSupportsV1Neo:(id /* block */)a0;
- (void)updateSupportsV1NeoWithAccountDevices:(id)a0;

@end
