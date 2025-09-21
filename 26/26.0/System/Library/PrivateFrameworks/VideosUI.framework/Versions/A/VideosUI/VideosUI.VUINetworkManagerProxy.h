@class NSURLRequest, NSError, AMSURLResult;

@interface VideosUI.VUINetworkManagerProxy : NSObject

+ (void)executeRequest:(NSURLRequest *)a0 completion:(void (^)(AMSURLResult *, NSError *))a1;

- (id)init;
- (void)cancel:(NSURLRequest *)a0 completion:(void (^)(void))a1;

@end
