@class NSMutableDictionary, NSDictionary, CKFetchRecordsOperationInfo, NSArray, NSString;
@protocol CKFetchRecordsOperationCallbacks;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets> {
    unsigned long long _mergeableValueCount;
    unsigned long long _mergeableDeltaCount;
    unsigned long long _assetBackedMergeableDeltaCount;
    NSMutableDictionary *_recordErrors;
}

@property (readonly, nonatomic) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordETagMatchedBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock_wrapper;
@property (nonatomic) BOOL isFetchCurrentUserOperation;
@property (nonatomic) BOOL shouldRequestEncryptedAssetOwnerIdentifier;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL dropInMemoryAssetContentASAP;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToRecords;
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (copy, nonatomic) NSDictionary *recordIDsToETags;
@property (copy, nonatomic) id /* block */ perRecordETagMatchedBlock;
@property (copy, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (id)fetchCurrentUserRecordOperation;

- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)handleFetchForRecordID:(id)a0 didProgress:(double)a1;
- (void)setFetchRecordsCompletionBlockIVar:(id /* block */)a0;
- (void)handleAssetDataForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 data:(id)a3 offset:(unsigned long long)a4;
- (id)initWithRecordIDs:(id)a0;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
