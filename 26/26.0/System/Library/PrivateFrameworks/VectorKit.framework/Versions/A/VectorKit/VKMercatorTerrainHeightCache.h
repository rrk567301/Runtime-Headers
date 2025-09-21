@protocol VKMercatorTerrainHeightProvider;

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>> { struct __tree<std::__value_type<md::Anchor *, float>, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>>, std::allocator<std::__value_type<md::Anchor *, float>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _anchorToHeight;
}

@property (weak, nonatomic) id<VKMercatorTerrainHeightProvider> heightProvider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidateRect:(const void *)a0;
- (double)heightForAnchor:(void *)a0;
- (void)removeCachedValueForAnchor:(void *)a0;

@end
