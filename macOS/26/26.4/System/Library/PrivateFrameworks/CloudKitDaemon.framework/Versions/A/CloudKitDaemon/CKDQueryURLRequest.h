@class NSString, NSArray, NSSet, NSData, CKRecordZoneID, NSMutableArray, CKQuery;

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining>

@property (retain, nonatomic) NSMutableArray *queryResponses;
@property (retain, nonatomic) NSData *resultsCursor;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (nonatomic) BOOL queryWasSuccessful;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) NSData *cursor;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSArray *requestedFields;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) id /* block */ recordsParsedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;
- (BOOL)isFullZoneRequest;
- (void)requestDidComplete;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (BOOL)requestGETPreAuth;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 query:(id)a1 cursor:(id)a2 limit:(unsigned long long)a3 requestedFields:(id)a4 zoneID:(id)a5;
- (void).cxx_destruct;
- (id)queryZoneID;

@end
