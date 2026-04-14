@class NSDictionary, CKRecordZoneID;
@protocol CKDOperationCallbackProxy, CKMovePhotosOperationCallbacks;

@interface CKDMovePhotosOperation : CKDModifyRecordsOperation

@property (copy, nonatomic) NSDictionary *moveChangesByDestinationRecordID;
@property (copy, nonatomic) CKRecordZoneID *sourceZoneID;
@property (nonatomic) long long sourceDatabaseScope;
@property (retain, nonatomic) id<CKMovePhotosOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ moveCompletionBlock;

- (id)activityCreate;
- (void)main;
- (void)_reallyHandleRecordMoved:(id)a0 handler:(id)a1 responseCode:(id)a2 recordForOplockFailure:(id)a3 destinationServerRecord:(id)a4 moveMarkerServerRecord:(id)a5;
- (id)handlerForSaveWithRecord:(id)a0;
- (void)callbackWithMetadata:(id)a0 error:(id)a1;
- (void)_handleRecordMoved:(id)a0 handler:(id)a1 responseCode:(id)a2 recordForOplockFailure:(id)a3 destinationServerRecord:(id)a4 moveMarkerServerRecord:(id)a5;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)_createModifyRequestWithRecordsToSave:(id)a0 recordsToDelete:(id)a1 recordsToDeleteToEtags:(id)a2 recordIDsToDeleteToSigningPCSIdentity:(id)a3 handlersByRecordID:(id)a4 sendMergeableDeltas:(BOOL)a5;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)moveCallbackWithMetadata:(id)a0 error:(id)a1;
- (id)handlerForDeleteWithRecordID:(id)a0;
- (void).cxx_destruct;

@end
