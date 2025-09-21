@class NSArray, NSDictionary, CKRecordZoneID, CKQuery, CKQueryCursor;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (nonatomic) char shouldFetchAssetContent;
@property (nonatomic) char fetchAllResults;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
