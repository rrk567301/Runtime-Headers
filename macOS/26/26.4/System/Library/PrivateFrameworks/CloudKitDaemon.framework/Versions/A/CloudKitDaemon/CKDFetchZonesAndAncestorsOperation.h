@class NSArray, NSDictionary;

@interface CKDFetchZonesAndAncestorsOperation : CKDDatabaseOperation

@property (readonly, copy, nonatomic) NSArray *recordZoneIDs;
@property (readonly, copy, nonatomic) NSDictionary *configurationsByZoneID;
@property (copy) id /* block */ ancestorsWereFetchedBlock;

- (int)operationType;
- (id)relevantZoneIDs;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)_sendFetchRecordZoneAncestorsRequest;

@end
