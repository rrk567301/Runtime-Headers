@class NSURLRequest, NSError, AMSURLResult;

@interface VideosUI.VUIUTSNetworkManagerProxy : NSObject

+ (void)cancel:(NSURLRequest *)a0 completion:(void (^)(void))a1;
+ (id)createURLRequestFromRequestProperties:(id)a0 urlRequest:(id)a1 completion:(id *)a2;
+ (void)executeRequest:(NSURLRequest *)a0 completion:(void (^)(AMSURLResult *, NSError *))a1;
+ (void)fetchConfiguration:(BOOL)a0 completion:(void (^)(AMSURLResult *, NSError *))a1;

- (id)init;

@end
