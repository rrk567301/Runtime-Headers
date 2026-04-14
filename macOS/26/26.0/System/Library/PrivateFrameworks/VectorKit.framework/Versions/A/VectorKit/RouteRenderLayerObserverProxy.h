@class NSString;

@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {
    struct PolylineGroupChangeObserver { void /* function */ **x0; } *_polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { void *__begin_; void *__end_; void *__cap_; } _retainedGroups;
    struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { struct __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _observedGroupsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving:(id)a0;
- (void)dealloc;
- (void)polylineGroup:(id)a0 didSelectPolyline:(id)a1;
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver { void /* function */ **x0; } *)a0;
- (void)polylineGroup:(id)a0 didAddPolyline:(id)a1;
- (void)polylineGroup:(id)a0 didRemovePolyline:(id)a1;
- (id).cxx_construct;
- (void)polylineGroup:(id)a0 didSkipPolyline:(id)a1;
- (void)startObserving:(id)a0;
- (void)polylineGroup:(id)a0 didFocusPolyline:(id)a1;
- (void).cxx_destruct;

@end
