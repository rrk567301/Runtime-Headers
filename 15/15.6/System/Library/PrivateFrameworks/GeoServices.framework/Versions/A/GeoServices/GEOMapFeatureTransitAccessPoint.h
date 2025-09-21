@interface GEOMapFeatureTransitAccessPoint : NSObject {
    void *_feature;
    struct shared_ptr<geo::codec::VectorTile> { struct VectorTile *__ptr_; struct __shared_weak_count *__cntrl_; } _retainedTile;
}

@property (readonly, nonatomic) void *feature;
@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) char isEntrance;
@property (readonly, nonatomic) char isExit;
@property (readonly, nonatomic) double radiusMeters;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFeature:(void *)a0;

@end
