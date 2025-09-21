@class NSData, CKModifyRecordsOperationInfo, NSArray, NSString, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray;
@protocol CKModifyRecordsOperationCallbacks;

@interface CKModifyRecordsOperation : CKDatabaseOperation <CKModifyRecordsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *savedRecords;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey;
@property (nonatomic) char shouldReportRecordsInFlight;
@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (readonly, nonatomic) id<CKModifyRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ recordsInFlightBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock_wrapper;
@property (copy, nonatomic) id /* block */ modifyRecordsCompletionBlock_wrapper;
@property (nonatomic) char alwaysFetchPCSFromServer;
@property (nonatomic) char shouldOnlySaveAssetContent;
@property (nonatomic) char markAsParticipantNeedsNewInvitationToken;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (copy, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (copy, nonatomic) id /* block */ recordsInFlightBlock;
@property (nonatomic) char shouldCloneFileInAssetCache;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) char atomic;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (char)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (char)_prepareFieldValuesForUploadWithError:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (char)claimPackagesInRecord:(id)a0 error:(id *)a1;
- (void)destroyPackages:(id)a0;
- (void)destroyPackagesInRecords:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleDeleteForRecordID:(id)a0 error:(id)a1;
- (void)handleRecordIDsInFlight:(id)a0 reply:(id /* block */)a1;
- (void)handleRecordModificationForRecordID:(id)a0 didProgress:(double)a1;
- (void)handleRecordUploadForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 signature:(id)a3 size:(unsigned long long)a4 paddedFileSize:(unsigned long long)a5 uploaded:(char)a6 uploadReceipt:(id)a7 uploadReceiptExpiration:(double)a8 wrappedAssetKey:(id)a9 clearAssetKey:(id)a10 referenceSignature:(id)a11;
- (void)handleSaveForRecordID:(id)a0 recordMetadata:(id)a1 error:(id)a2;
- (char)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (void)setModifyRecordsCompletionBlockIVar:(id /* block */)a0;

@end
