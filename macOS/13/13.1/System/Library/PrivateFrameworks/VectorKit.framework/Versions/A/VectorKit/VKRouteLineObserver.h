@class VKRouteLine;

@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol> {
    void *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)routeLineDidUpdateSections:(id)a0;
- (id)initWithTransitSupport:(void *)a0 andRouteLine:(id)a1;

@end
