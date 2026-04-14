@class NSArray, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface CKDFetchRecordZoneAncestorsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableSet *accessedZoneIDs;
@property (readonly, copy, nonatomic) NSArray *recordZoneIDs;
@property (readonly, copy, nonatomic) NSDictionary *configurationsByZoneID;
@property (copy) id /* block */ ancestorsWereFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1 configurationsByZoneID:(id)a2;

@end
