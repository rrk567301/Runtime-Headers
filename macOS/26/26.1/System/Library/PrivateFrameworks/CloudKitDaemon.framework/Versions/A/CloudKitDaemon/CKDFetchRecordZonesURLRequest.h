@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)requestOperationClasses;
- (void)fillOutRequestProperties:(id)a0;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;
- (BOOL)isFullZoneRequest;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;

@end
