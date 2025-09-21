@class CKDFetchRecordsOperation, NSSet, NSDictionary, NSMutableDictionary, NSObject, CKDRecordCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    CKDRecordCache *_recordCache;
}

@property (nonatomic) BOOL fetchAssetContents;
@property (nonatomic) BOOL fetchMergeableValues;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (readonly, nonatomic) NSMutableDictionary *fetchInfosByOrder;
@property unsigned long long curFetchOrder;
@property unsigned long long highestReturnedOrder;
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property BOOL started;
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;
@property (nonatomic) BOOL forceDecryptionAttempt;
@property (nonatomic) BOOL useRecordCache;
@property (copy, nonatomic) id /* block */ fetchAggregatorCompletionBlock;

- (id)activityCreate;
- (void)main;
- (void)fetchRecords:(id)a0 withPerRecordCompletion:(id /* block */)a1;
- (void)dealloc;
- (id)_fetchRecord:(id)a0 recordReadyHandle:(BOOL *)a1 withRecordCompletion:(id /* block */)a2;
- (void)finishIfAppropriate;
- (void)_performCallbackForFetchInfoLocked:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_addRecordFetchInfos:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (BOOL)supportsClearAssetEncryption;
- (void)_lockedSendFetchRequest;
- (void)_recordFetchesAvailable;
- (id)description;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_finishRecordFetchAggregator;
- (void).cxx_destruct;

@end
