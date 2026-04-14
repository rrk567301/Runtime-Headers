@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

+ (BOOL)isHeicFormatAllowed;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)a0;
- (void)processResponse;
- (id)initWithCaller:(id)a0 options:(long long)a1;

@end
