@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) char onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (void).cxx_destruct;
- (char)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (char)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;
- (char)isFullZoneRequest;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (char)requiresCKAnonymousUserIDs;
- (id)zoneIDsToLock;

@end
