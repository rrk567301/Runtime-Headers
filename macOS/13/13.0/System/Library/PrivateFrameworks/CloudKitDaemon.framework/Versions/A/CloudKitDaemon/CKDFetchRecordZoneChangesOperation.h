@class NSDictionary, CKServerChangeToken, NSData;

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation

@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long resultStatus;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordDeletedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;

- (void).cxx_destruct;
- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (id)analyticsPayload;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)pipeliningDescription;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;
- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;

@end
