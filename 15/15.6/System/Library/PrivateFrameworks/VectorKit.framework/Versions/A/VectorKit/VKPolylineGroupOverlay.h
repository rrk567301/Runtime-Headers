@class NSString, NSMutableSet, GEOMapRegion, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKRouteOverlay> {
    struct __CFSet { } *_observers;
}

@property (readonly, nonatomic) NSMutableSet *polylines;
@property (retain, nonatomic) VKPolylineOverlay *selectedPolyline;
@property (retain, nonatomic) VKPolylineOverlay *focusedPolyline;
@property (retain, nonatomic) VKPolylineOverlay *skippedPolyline;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) char containsTransit;
@property (nonatomic) char showTraffic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addPolyline:(id)a0;
- (void)removePolyline:(id)a0;
- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;

@end
