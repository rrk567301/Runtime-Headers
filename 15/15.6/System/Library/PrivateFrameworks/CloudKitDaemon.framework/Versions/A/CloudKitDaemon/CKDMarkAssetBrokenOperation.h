@class CKDModifyRecordZonesOperation, NSString, CKRecordID, CKDModifyRecordsOperation, CKDMarkAssetBrokenURLRequestWrapperOperation, CKRecordZone, NSError, CKRecord, CKUploadRequestConfiguration, CKDFetchRecordsOperation, CKDFetchRecordZonesOperation;
@protocol CKMarkAssetBrokenOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDMarkAssetBrokenOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (nonatomic) char touchRepairZone;
@property (nonatomic) char bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) char simulateCorruptAsset;
@property (nonatomic) char writeRepairRecord;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDFetchRecordZonesOperation *zoneFetchOperation;
@property (retain, nonatomic) CKDModifyRecordZonesOperation *zoneCreateOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *corruptOperation;
@property (retain, nonatomic) CKDMarkAssetBrokenURLRequestWrapperOperation *wrapperOperation;
@property (retain, nonatomic) CKRecordZone *repairZone;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic) unsigned long long numMarkAssetBrokenFailures;
@property (retain, nonatomic) NSError *markAssetBrokenError;
@property (retain, nonatomic) id<CKMarkAssetBrokenOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ assetOrPackageMarkedBrokenBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)repairContainer;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (void)_breakAsset;
- (void)_fetchRecord;
- (void)_markAssetBroken;
- (void)_touchCreateRepairZone;
- (void)_touchFetchRepairZone;
- (id)assetOrPackageForFetchedRecord;
- (id)checkPreconditions;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)makeStateTransition;

@end
