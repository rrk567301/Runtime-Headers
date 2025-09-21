@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {
    struct unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { struct __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _piecesConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)a0 localPoint:(const void *)a1 localRadiusSqr:(float)a2 localSearch:(const void *)a3 handler:(id /* block */)a4;
- (BOOL)_checkEdgeForDuplicates:(const void *)a0;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;

@end
