@class _TtC10Navigation29CommuteRouteRequestParameters, NSError, MNCommuteRouteSet;

@interface MNCommuteRouteServer : NSObject <Navigation.CommuteRouteRequestInterface, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _performanceEventLogger;
    void /* unknown type, empty encoding */ $__lazy_storage_$__xpcInterface;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)requestCommuteRoutesWith:(_TtC10Navigation29CommuteRouteRequestParameters *)a0 completionHandler:(void (^)(MNCommuteRouteSet *, NSError *))a1;

@end
