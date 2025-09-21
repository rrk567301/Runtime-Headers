@class NSString;

@interface LabelNavRouteContextObserverProxy : NSObject <VKRouteContextObserver> {
    struct RouteContextChangeObserver { void /* function */ **x0; } *_observer;
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, geo::allocator_adapter<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::zone_mallocator>> { void *__begin_; void *__end_; void *__cap_; struct allocator_adapter<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::zone_mallocator> { struct zone_mallocator { } _allocator; } __alloc_; } _observedContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving:(id)a0;
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver { void /* function */ **x0; } *)a0;
- (void)dealloc;
- (void)routeContextStateDidChange:(id)a0;
- (id).cxx_construct;
- (void)startObserving:(id)a0;
- (void).cxx_destruct;

@end
