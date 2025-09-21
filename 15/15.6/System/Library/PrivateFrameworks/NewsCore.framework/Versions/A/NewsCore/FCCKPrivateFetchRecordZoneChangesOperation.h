@class NSArray, FCCKPrivateDatabaseServerChangeToken, CKRecordZoneID;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultChangedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) char resultMoreComing;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) char fetchNewestChangesFirst;
@property (nonatomic) char fetchAllChanges;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (char)validateOperation;
- (id)_configurationForDestination:(long long)a0;

@end
