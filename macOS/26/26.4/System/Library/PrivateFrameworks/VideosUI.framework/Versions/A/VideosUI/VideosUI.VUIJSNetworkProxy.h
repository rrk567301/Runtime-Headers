@class WLKUTSNetworkRequestOperation, NSArray, AMSURLResult, WLKURLRequestProperties, NSURLRequest, NSError;

@interface VideosUI.VUIJSNetworkProxy : NSObject

+ (void)makeNetworkRequest:(NSURLRequest *)a0 requestProperties:(WLKURLRequestProperties *)a1 groupDsids:(NSArray *)a2 completionHandler:(void (^)(AMSURLResult *, NSError *))a3;
+ (void)makeNetworkRequestOperation:(WLKURLRequestProperties *)a0 completionHandler:(void (^)(WLKUTSNetworkRequestOperation *))a1;

- (id)init;

@end
