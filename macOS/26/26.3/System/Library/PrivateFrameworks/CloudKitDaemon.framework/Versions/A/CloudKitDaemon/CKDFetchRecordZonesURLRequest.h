@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (BOOL)allowsAnonymousAccount;
- (void)fillOutRequestProperties:(id)a0;
- (id)zoneIDsToLock;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (BOOL)isFullZoneRequest;

@end
