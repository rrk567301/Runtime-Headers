@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (id)responseDictionary;
- (id)httpResponse;
- (long long)responseStatusCode;
- (id)error;
- (id)data;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (long long)resourceFetchType;
- (id)amsUrlResponse;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
