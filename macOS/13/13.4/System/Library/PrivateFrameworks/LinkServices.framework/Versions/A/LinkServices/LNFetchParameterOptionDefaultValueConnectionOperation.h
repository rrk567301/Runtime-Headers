@class LNActionMetadata, NSString, LNDynamicOption;

@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (copy, nonatomic) NSString *parameterIdentifier;
@property (copy, nonatomic) LNDynamicOption *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 actionMetadata:(id)a1 parameterIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
