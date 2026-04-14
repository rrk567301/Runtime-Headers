@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;

@end
