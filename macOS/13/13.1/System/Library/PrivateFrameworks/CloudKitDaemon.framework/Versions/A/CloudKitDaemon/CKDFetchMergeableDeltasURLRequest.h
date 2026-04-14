@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID;
@property (readonly, nonatomic) NSDictionary *previousContinuationTokens;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)anonymousUserIDForHTTPHeader;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 previousContinuationTokens:(id)a2;

@end
