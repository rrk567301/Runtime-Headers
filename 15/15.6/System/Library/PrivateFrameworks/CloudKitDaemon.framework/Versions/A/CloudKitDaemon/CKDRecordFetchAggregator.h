@class CKDFetchRecordsOperation, NSSet, NSDictionary, NSMutableDictionary, NSObject, CKDRecordCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    CKDRecordCache *_recordCache;
}

@property (nonatomic) char fetchAssetContents;
@property (nonatomic) char fetchMergeableValues;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) char preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (readonly, nonatomic) NSMutableDictionary *fetchInfosByOrder;
@property unsigned long long curFetchOrder;
@property unsigned long long highestReturnedOrder;
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property char started;
@property (getter=isMarkedToFinishByParent) char markedToFinishByParent;
@property (nonatomic) char forceDecryptionAttempt;
@property (nonatomic) char useRecordCache;
@property (copy, nonatomic) id /* block */ fetchAggregatorCompletionBlock;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)CKPropertiesDescription;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (void)_addRecordFetchInfos:(id)a0;
- (id)_fetchRecord:(id)a0 recordReadyHandle:(char *)a1 withRecordCompletion:(id /* block */)a2;
- (void)_finishRecordFetchAggregator;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_lockedSendFetchRequest;
- (void)_performCallbackForFetchInfoLocked:(id)a0;
- (void)_recordFetchesAvailable;
- (void)fetchRecords:(id)a0 withPerRecordCompletion:(id /* block */)a1;
- (void)finishIfAppropriate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)supportsClearAssetEncryption;

@end
