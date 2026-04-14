@class NSArray, AMSURLResult, WLKURLRequestProperties, NSURLRequest, NSError;

@interface VideosUI.JSNetworkProxy : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ prefetchingOperation;
    void /* unknown type, empty encoding */ prefetchingTask;
    void /* unknown type, empty encoding */ prefetchingRequestProperties;
    void /* unknown type, empty encoding */ prefetchingUserEnvironmentHash;
}

- (void)makeNetworkRequest:(NSURLRequest *)a0 requestProperties:(WLKURLRequestProperties *)a1 groupDsids:(NSArray *)a2 completion:(void (^)(AMSURLResult *, NSError *))a3;

@end
