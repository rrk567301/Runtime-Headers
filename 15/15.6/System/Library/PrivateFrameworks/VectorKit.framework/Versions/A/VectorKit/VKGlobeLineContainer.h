@class VKPolylineOverlay;
@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

@interface VKGlobeLineContainer : NSObject {
    id<VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    struct set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> { struct __tree<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<VKRouteOverlay>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<id<VKRouteOverlay>>> { unsigned long long __value_; } __pair3_; } __tree_; } _retainedOverlays;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { unsigned long long __value_; } __pair3_; } __tree_; } _overlays;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { unsigned long long __value_; } __pair3_; } __tree_; } _persistentOverlays;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { unsigned long long __value_; } __pair3_; } __tree_; } _nonPersistentOverlays;
    void *_routeRenderLayer;
    struct map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> { struct __tree<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>, std::allocator<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>> { unsigned long long __value_; } __pair3_; } __tree_; } _polylinesToRoutes;
    struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKPolylineOverlay *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _selectedPolyline;
    struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKPolylineOverlay *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _skippedPolyline;
    struct VKGlobeRouteSplit { void /* function */ **x0; id x1; } *_routeSplit;
    struct VKGlobeRouteSplit { void /* function */ **x0; id x1; } *_skippedRouteSplit;
}

@property (retain, nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property (retain, nonatomic) id<VKRouteMatchedAnnotationPresentation> skippedRouteLineSplitAnnotation;
@property (weak, nonatomic) id<VKGlobeLineContainerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)update;
- (void)addLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc_arc { } x2; struct _release_objc_arc { } x3; })a0;
- (const void *)overlays;
- (void)_removeOverlay:(id)a0;
- (void)_addOverlay:(id)a0;
- (void)_destroyLinesIfNeeded;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
- (void)_updateSkippedRouteSplit;
- (void)addNonPersistentOverlay:(id)a0;
- (void)addPersistentOverlay:(id)a0;
- (void)clearLineSelection;
- (void)clearLineSkip;
- (float)halfWidthForLine:(id)a0 styleZ:(float)a1;
- (char)hasNonPersistentOverlay:(id)a0;
- (char)hasPersistentOverlay:(id)a0;
- (id)initWithRouteRenderLayer:(void *)a0;
- (const void *)nonPersistentOverlays;
- (const void *)persistentOverlays;
- (void)removeLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc_arc { } x2; struct _release_objc_arc { } x3; })a0;
- (void)removeNonPersistentOverlay:(id)a0;
- (void)removePersistentOverlay:(id)a0;
- (void)setSelected:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc_arc { } x2; struct _release_objc_arc { } x3; })a0 selected:(char)a1;
- (void)setSkipped:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc_arc { } x2; struct _release_objc_arc { } x3; })a0 skipped:(char)a1;

@end
