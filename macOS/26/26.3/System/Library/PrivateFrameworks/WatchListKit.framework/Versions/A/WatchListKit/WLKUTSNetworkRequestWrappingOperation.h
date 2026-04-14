@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (id)responseDictionary;
- (long long)responseStatusCode;
- (long long)resourceFetchType;
- (id)error;
- (void)executionDidBegin;
- (id)data;
- (id)httpResponse;
- (void).cxx_destruct;
- (id)amsUrlResponse;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
