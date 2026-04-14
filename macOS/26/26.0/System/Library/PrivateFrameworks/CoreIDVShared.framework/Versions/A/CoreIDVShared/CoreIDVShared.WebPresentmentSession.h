@class NSError, NSXPCListenerEndpoint, _TtC13CoreIDVShared24XPCWebPresentmentRequest;

@interface CoreIDVShared.WebPresentmentSession : _TtCs12_SwiftObject <CoreIDVShared.WebPresentmentDelegateInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ isCallerEntitled;
    void /* unknown type, empty encoding */ onEndpoint;
    void /* unknown type, empty encoding */ onReleaseRequest;
}

- (void)releaseRequestWithCompletionHandler:(void (^)(_TtC13CoreIDVShared24XPCWebPresentmentRequest *, NSError *))a0;
- (void)connectToViewServiceWith:(NSXPCListenerEndpoint *)a0 completionHandler:(void (^)(NSError *))a1;

@end
