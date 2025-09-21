@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) char ignoreMissingDeltas;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)requestOperationsForRequest:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(char)a2 error:(id *)a3;

- (void).cxx_destruct;
- (char)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (char)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(char)a2;
- (int)isolationLevel;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
