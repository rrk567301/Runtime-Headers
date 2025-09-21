@class NSArray, CKRecordID;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest

@property (copy, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) char recovered;
@property (nonatomic) char isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recoveredAssetRepairRecordID:(id)a1 size:(unsigned long long)a2 putReceipt:(id)a3;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 recoveredPackageRepairRecordID:(id)a1 sizes:(id)a2 putReceipts:(id)a3;
- (id)initWithOperation:(id)a0 repairRecordID:(id)a1 recovered:(char)a2 package:(char)a3 sizes:(id)a4 putReceipts:(id)a5;
- (id)initWithOperation:(id)a0 unrecoveredRepairRecordID:(id)a1;
- (id)recordIDsUsedInZones:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
