@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ quotaFetchedBlock;

- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void).cxx_destruct;

@end
