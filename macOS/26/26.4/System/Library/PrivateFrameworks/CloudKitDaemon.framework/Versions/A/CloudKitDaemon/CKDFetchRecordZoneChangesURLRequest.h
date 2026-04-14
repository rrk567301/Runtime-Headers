@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSMutableArray, NSString;

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
@property (nonatomic) BOOL fetchChangesForMergeableValues;
@property (copy, nonatomic) id /* block */ recordsChangedBlock;
@property (copy, nonatomic) id /* block */ recordDeletedBlock;
@property (copy, nonatomic) id /* block */ zoneAttributesChangedBlock;
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
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
- (void)noteUsageForRecordID:(id)a0 at:(id)a1;
- (void)noteUsageForDeletedRecordID:(id)a0 at:(id)a1;
- (id)_handleRecordChanges:(id)a0 deltaChanges:(id)a1 zoneAttributesChange:(id)a2 forZoneID:(id)a3;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1 configurationsByRecordZoneID:(id)a2;

@end
