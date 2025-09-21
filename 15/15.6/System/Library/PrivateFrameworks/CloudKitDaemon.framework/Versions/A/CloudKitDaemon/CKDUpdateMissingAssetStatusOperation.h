@class CKDFetchRecordsOperation, NSArray, CKRecordID, CKDModifyRecordsOperation, CKRecord;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) char recovered;
@property (nonatomic) char isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation;
@property (retain, nonatomic) CKRecord *record;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)_updateMissingAssetStatus;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)makeStateTransition;

@end
