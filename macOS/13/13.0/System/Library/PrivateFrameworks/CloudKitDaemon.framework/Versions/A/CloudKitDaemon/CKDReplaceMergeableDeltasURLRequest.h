@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)requestOperationsForRequest:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)anonymousUserIDForHTTPHeader;
- (int)isolationLevel;
- (id)initWithOperation:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2;

@end
