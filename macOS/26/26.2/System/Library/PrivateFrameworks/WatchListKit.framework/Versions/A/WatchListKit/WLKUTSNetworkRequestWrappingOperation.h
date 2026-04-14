@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (id)responseDictionary;
- (long long)responseStatusCode;
- (void)executionDidBegin;
- (id)error;
- (void).cxx_destruct;
- (long long)resourceFetchType;
- (id)data;
- (id)httpResponse;
- (id)amsUrlResponse;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
