@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (long long)responseStatusCode;
- (id)responseDictionary;
- (id)httpResponse;
- (void)executionDidBegin;
- (long long)resourceFetchType;
- (id)error;
- (void).cxx_destruct;
- (id)data;
- (id)amsUrlResponse;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
