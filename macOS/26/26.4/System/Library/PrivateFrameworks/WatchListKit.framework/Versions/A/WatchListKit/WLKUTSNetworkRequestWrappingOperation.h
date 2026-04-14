@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (long long)responseStatusCode;
- (id)responseDictionary;
- (long long)resourceFetchType;
- (id)error;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)data;
- (id)httpResponse;
- (id)amsUrlResponse;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
