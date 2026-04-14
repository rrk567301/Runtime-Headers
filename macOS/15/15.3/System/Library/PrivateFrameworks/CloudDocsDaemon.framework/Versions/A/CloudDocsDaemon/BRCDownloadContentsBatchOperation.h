@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)actionPrettyName;
- (void)addDownload:(id)a0;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0 sessionContext:(id)a1;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (id)transferredObjectsPrettyName;

@end
