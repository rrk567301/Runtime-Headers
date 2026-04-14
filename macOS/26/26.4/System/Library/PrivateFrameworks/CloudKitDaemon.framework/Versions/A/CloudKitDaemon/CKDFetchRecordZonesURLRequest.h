@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (readonly, nonatomic) NSArray *recordZones;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (copy, nonatomic) id /* block */ recordZoneFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllRecordZonesBlock;
@property (copy, nonatomic) id /* block */ anonymousRecordZoneTuplesFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;
- (BOOL)isFullZoneRequest;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1;
- (void).cxx_destruct;

@end
