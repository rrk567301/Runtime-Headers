@class BRCClientZone;

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    BRCClientZone *_clientZone;
}

@property (copy) id /* block */ perUploadCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_publishUploadProgress:(id)a0;
- (void)_uploadRecordsByID:(id)a0;
- (id)actionPrettyName;
- (void)addItem:(id)a0 stageID:(id)a1 record:(id)a2 transferSize:(unsigned long long)a3;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0 sessionContext:(id)a1 clientZone:(id)a2;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;

@end
