@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_responseDictionary;
}

@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties;
@property char didHandleInvalidConfig;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)responseDictionary;
- (void)configureSession;
- (id)initWithRequestProperties:(id)a0;
- (void)processResponse;
- (void)handleResult:(id)a0 error:(id)a1;
- (void)prepareURLRequest:(id /* block */)a0;

@end
