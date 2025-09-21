@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)requestOperationsForRequest:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2 error:(id *)a3;

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
- (id)initWithOperation:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2;

@end
