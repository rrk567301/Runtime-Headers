@class WLKUTSNetworkRequestOperation, AMSURLResult, WLKURLRequestProperties, NSURLRequest, NSError;

@interface VideosUI.VUIJSNetworkProxy : NSObject

+ (void)makeNetworkRequest:(NSURLRequest *)a0 requestProperties:(WLKURLRequestProperties *)a1 completionHandler:(void (^)(AMSURLResult *, NSError *))a2;
+ (void)makeNetworkRequestOperation:(WLKURLRequestProperties *)a0 completionHandler:(void (^)(WLKUTSNetworkRequestOperation *))a1;

- (id)init;

@end
