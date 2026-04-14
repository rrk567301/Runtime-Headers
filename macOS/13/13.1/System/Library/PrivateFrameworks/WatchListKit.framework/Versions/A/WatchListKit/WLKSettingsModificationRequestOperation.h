@class NSDictionary;

@interface WLKSettingsModificationRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_modifications;
}

+ (id)_requestURL:(id *)a0;

- (void).cxx_destruct;
- (void)prepareURLRequest:(id /* block */)a0;
- (id)initWithModifications:(id)a0;
- (id)_postBody;

@end
