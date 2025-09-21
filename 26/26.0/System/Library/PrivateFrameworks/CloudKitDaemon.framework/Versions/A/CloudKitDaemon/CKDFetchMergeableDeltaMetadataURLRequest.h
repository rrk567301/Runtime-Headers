@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSDictionary *continuationTokens;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)zoneIDsToLock;
- (void)fillOutRequestProperties:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (BOOL)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (int)isolationLevel;
- (void).cxx_destruct;
- (id)anonymousUserIDForHTTPHeader;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 continuationTokens:(id)a2;

@end
