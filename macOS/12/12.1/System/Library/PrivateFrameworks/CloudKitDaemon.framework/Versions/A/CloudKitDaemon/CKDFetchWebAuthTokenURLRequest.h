@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;

@end
