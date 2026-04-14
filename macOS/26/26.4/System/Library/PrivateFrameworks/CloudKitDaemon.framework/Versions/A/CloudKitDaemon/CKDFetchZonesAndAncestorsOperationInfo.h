@class NSArray, NSDictionary;

@interface CKDFetchZonesAndAncestorsOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByZoneID;

- (id)initWithRecordZoneIDs:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigurationsByRecordZoneID:(id)a0;

@end
