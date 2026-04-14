@class CKDFetchRecordsOperation, NSArray, CKRecordID, CKDModifyRecordsOperation, CKRecord;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation;
@property (retain, nonatomic) CKRecord *record;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (void)_updateMissingAssetStatus;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)a0;

@end
