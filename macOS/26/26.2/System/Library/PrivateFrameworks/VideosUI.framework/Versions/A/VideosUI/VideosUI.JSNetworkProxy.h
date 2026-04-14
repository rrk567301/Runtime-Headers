@class AMSURLResult, WLKURLRequestProperties, NSURLRequest, NSError;

@interface VideosUI.JSNetworkProxy : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ prefetchingOperation;
    void /* unknown type, empty encoding */ prefetchingTask;
    void /* unknown type, empty encoding */ prefetchingRequestProperties;
}

- (void)makeNetworkRequest:(NSURLRequest *)a0 requestProperties:(WLKURLRequestProperties *)a1 completion:(void (^)(AMSURLResult *, NSError *))a2;

@end
