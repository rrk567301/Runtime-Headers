@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) id<CKArchiveRecordsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (id)activityCreate;
- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_handleRecordArchived:(id)a0 responseCode:(id)a1;

@end
