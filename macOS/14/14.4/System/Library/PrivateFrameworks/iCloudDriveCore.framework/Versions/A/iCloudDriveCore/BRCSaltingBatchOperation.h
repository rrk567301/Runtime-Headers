@class BRCItemID, NSString, CKRecordID, NSData, BRCClientZone;

@interface BRCSaltingBatchOperation : _BRCOperation <BRCOperationSubclass> {
    long long _batchSize;
    BRCClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    CKRecordID *_rootRecordID;
    unsigned int _rootSaltingState;
    NSData *_baseHashSaltValidation;
    NSData *_childBaseSalt;
}

@property (copy, nonatomic) id /* block */ metadataCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_buildRecordsWithCompletion:(id /* block */)a0;
- (void)_createCKOperationForRecords:(id)a0 completion:(id /* block */)a1;
- (id)_createStructureRecordForRootItem;
- (id)_createStructureRecordForServerItem:(id)a0 salt:(id)a1;
- (id)_createStructureRecordWithRecordID:(id)a0 itemID:(id)a1 basehashSalt:(id)a2 statInfo:(id)a3;
- (id)_getWorkloop;
- (void)_sendRecordBatch:(id)a0 completion:(id /* block */)a1;
- (void)_updateRootItemInClientDB;
- (void)_updateRootItemInServerDB;
- (void)_updateSaltingInfoInClientDBWithRecords:(id)a0;
- (void)_updateSaltingInfoInServerDBWithRecords:(id)a0;
- (void)_updateServerTruthForItemID:(id)a0;
- (id)getOrGenerateChildBasehashSaltingKey;
- (id)initWithRootItem:(id)a0;

@end
