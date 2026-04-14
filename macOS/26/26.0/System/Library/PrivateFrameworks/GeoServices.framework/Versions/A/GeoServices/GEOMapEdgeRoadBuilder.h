@class __begin_, GEOVectorTile, __cap_, __end_;

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {
    struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> { struct __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>> { __begin_ ***__first_; __end_ ***x0; __cap_ ***x1; id **x2; } __map_; unsigned long long __start_; unsigned long long __size_; } _edges;
    GEOVectorTile *_retainedTile;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (void)_buildCompleteEdge;
- (unsigned long long)_connectionTypeForEdge:(id)a0 points:(struct GeoCodecsVectorTilePoint { float x0; float x1; } *)a1 connectingTilePoint:(struct Matrix<float, 2, 1> { float x0[2]; })a2;
- (BOOL)_findEdgeAheadInTile:(id)a0;
- (BOOL)_findEdgeBehindInTile:(id)a0;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (id)_firstTile;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (id)initWithMap:(id)a0 roadFeature:(id)a1 shouldFlip:(BOOL)a2;

@end
