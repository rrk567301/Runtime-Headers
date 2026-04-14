@class WBSLPLinkMetadataRequest;

@interface WBSLPLinkMetadataFetchOperation : WBSSiteMetadataFetchOperation

@property (readonly, nonatomic) WBSLPLinkMetadataRequest *request;
@property (readonly, copy, nonatomic) id /* block */ operationCompletionHandler;

+ (void)reportFetchCompletionWithMetadata:(id)a0 error:(id)a1 didUseOffScreenWebView:(BOOL)a2;
+ (id)configuredLPMetadataProvider;

- (void)cancel;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (id)initWithRequest:(id)a0 operationCompletionHandler:(id /* block */)a1;

@end
