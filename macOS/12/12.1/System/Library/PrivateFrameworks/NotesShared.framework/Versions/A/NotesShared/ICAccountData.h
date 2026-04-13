@class NSString, ICAccount, NSData;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;

+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newAccountDataWithIdentifier:(id)a0 account:(id)a1;
+ (id)accountDataWithIdentifier:(id)a0 context:(id)a1;
+ (id)newAccountDataForAccount:(id)a0;

- (BOOL)isDeletable;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (id)cloudAccount;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (BOOL)mergeWithMergeableData:(id)a0;
- (void)saveMergeableDataIfNeeded;
- (id)newlyCreatedRecord;
- (BOOL)isInICloudAccount;

@end
