@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BRCTransferBatchOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableDictionary *_entriesByRecordID;
    NSMutableDictionary *_entriesBySecondaryRecordID;
    NSMutableDictionary *_entriesByTransferID;
    unsigned long long _itemsCount;
}

@property (copy) id /* block */ didProgressBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long totalSize;
@property unsigned long long doneSize;
@property (readonly) unsigned long long itemsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *pendingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)subclassableDescriptionWithContext:(id)a0;
- (id)createActivity;
- (void).cxx_destruct;
- (void)addTransfer:(id)a0;
- (void)_addTransfer:(id)a0;
- (void)_cancelTransferID:(id)a0;
- (void)_finishedTransfer:(id)a0 error:(id)a1;
- (id)_finishedTransferForRecord:(id)a0 recordID:(id)a1 error:(id)a2;
- (void)_publishProgressIfNecessaryForTransfer:(id)a0;
- (void)_setProgress:(double)a0 forTransfer:(id)a1;
- (id)actionPrettyName;
- (void)cancelTransferID:(id)a0;
- (id)fetchOperationForTransfers:(id)a0 traceCode:(int)a1;
- (void)finishedTransferForRecord:(id)a0 recordID:(id)a1 error:(id)a2;
- (id)getTransferForTransferID:(id)a0;
- (id)initWithName:(id)a0 syncContext:(id)a1 sessionContext:(id)a2 group:(id)a3;
- (id)initWithName:(id)a0 syncContext:(id)a1 sessionContext:(id)a2 group:(id)a3 callBackQueueTarget:(id)a4;
- (void)mainWithTransfers:(id)a0;
- (double)progressForTransferID:(id)a0;
- (void)sendBatchProgressedCallback;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (void)setProgress:(double)a0 forRecordID:(id)a1;
- (id)transferredObjectsPrettyName;

@end
