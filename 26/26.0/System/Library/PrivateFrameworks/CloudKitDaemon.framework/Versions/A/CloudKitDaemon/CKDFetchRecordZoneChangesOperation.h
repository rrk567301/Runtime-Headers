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
@property (copy, nonatomic) id /* block */ zoneAttributesChangedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;

- (void)_noteOperationEnding;
- (id)analyticsPayload;
- (id)activityCreate;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteAttributesChangedForZone:(id)a0;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (id)pipeliningDescription;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;

@end
