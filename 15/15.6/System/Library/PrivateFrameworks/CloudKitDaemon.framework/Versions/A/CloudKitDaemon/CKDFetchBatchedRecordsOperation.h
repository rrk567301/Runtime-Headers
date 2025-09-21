@class NSArray, NSDictionary, CKDRecordFetchAggregator, NSSet, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining>

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) char forcePCSDecryptionAttempt;
@property (nonatomic) long long errorReportingStyle;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) char shouldFetchAssetContents;
@property (nonatomic) char fetchAllChanges;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (void)_handleAttributesChangedForZone:(id)a0 perRequestSchedulerInfo:(id)a1;
- (void)_handleChangedRecords:(id)a0 perRequestSchedulerInfo:(id)a1;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)a0;
- (void)_handleRecordDelete:(id)a0 recordType:(id)a1 perRequestSchedulerInfo:(id)a2;
- (void)_noteAttributesChangedForZone:(id)a0;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;
- (id)_possiblyWrapError:(id)a0 forRecordWithID:(id)a1 withCode:(long long)a2 format:(id)a3;
- (void)_processZonePCSChanges:(id)a0;
- (void)_sendFetchChangesRequestForZoneIDs:(id)a0 withOptions:(id)a1 previousRequestSchedulerInfo:(id)a2;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)supportsClearAssetEncryption;

@end
