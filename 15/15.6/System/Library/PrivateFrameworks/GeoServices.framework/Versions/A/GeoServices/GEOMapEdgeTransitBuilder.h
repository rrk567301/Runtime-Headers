@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> { struct __split_buffer<geo::TransitEdgePiece *, std::allocator<geo::TransitEdgePiece *>> { struct TransitEdgePiece **__first_; struct TransitEdgePiece **__begin_; struct TransitEdgePiece **__end_; struct __compressed_pair<geo::TransitEdgePiece **, std::allocator<geo::TransitEdgePiece *>> { struct TransitEdgePiece **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>> { unsigned long long __value_; } __size_; } _pieces;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_buildCompleteEdge;
- (char)_findEdgeAheadInTile:(id)a0;
- (char)_findEdgeBehindInTile:(id)a0;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (char)_shouldFindEdgeAhead;
- (char)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (id)initWithMap:(id)a0 firstPiece:(const struct TransitEdgePiece { id x0; unsigned long long x1; id x2; unsigned int x3; char x4; } *)a1;

@end
