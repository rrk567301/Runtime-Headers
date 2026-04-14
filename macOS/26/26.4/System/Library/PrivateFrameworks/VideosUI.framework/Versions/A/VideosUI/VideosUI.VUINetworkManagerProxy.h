@class NSURLRequest, NSError, AMSURLResult;

@interface VideosUI.VUINetworkManagerProxy : NSObject

+ (void)executeRequest:(NSURLRequest *)a0 options:(long long)a1 completion:(void (^)(AMSURLResult *, NSError *))a2;

- (id)init;
- (void)cancel:(NSURLRequest *)a0 completion:(void (^)(void))a1;

@end
