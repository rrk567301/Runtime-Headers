@class NSArray, NSMutableSet, NSMutableDictionary;
@protocol CKModifyRecordAccessOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;
@property (retain, nonatomic) id<CKModifyRecordAccessOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ accessWasGrantedBlock;
@property (copy, nonatomic) id /* block */ accessWasRevokedBlock;

+ (id)nameForState:(unsigned long long)a0;
+ (long long)isPredominatelyDownload;

- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (struct _PCSIdentityData { } *)_copyShareProtectionFromRecord:(id)a0 error:(id *)a1;
- (void)_fetchRecords;
- (void)_handleRecordFetched:(id)a0 recordID:(id)a1 error:(id)a2;
- (void)_handleRecordSaved:(id)a0 error:(id)a1;
- (void)_saveRecords;

@end
