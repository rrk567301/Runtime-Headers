@class NSSet, NSDictionary;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) char fetchAssetContents;
@property (nonatomic) char fetchMergeableValues;
@property (nonatomic) char preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) char forceDecryptionAttempt;

- (id)init;
- (void).cxx_destruct;

@end
