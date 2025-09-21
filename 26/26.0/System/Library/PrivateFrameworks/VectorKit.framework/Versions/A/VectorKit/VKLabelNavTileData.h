@class NSMutableArray, NSMapTable;

@interface VKLabelNavTileData : NSObject {
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    struct vector<LabelNavJunctionInfo, geo::allocator_adapter<LabelNavJunctionInfo, mdm::zone_mallocator>> { struct LabelNavJunctionInfo *__begin_; struct LabelNavJunctionInfo *__end_; struct LabelNavJunctionInfo *__cap_; struct allocator_adapter<LabelNavJunctionInfo, mdm::zone_mallocator> { struct zone_mallocator { } _allocator; } __alloc_; } _junctionInfos;
}

@property (readonly, nonatomic) struct shared_ptr<md::LabelTile> { struct LabelTile *__ptr_; struct __shared_weak_count *__cntrl_; } tile;
@property (nonatomic) BOOL oppositeCarriagewayJunctionsValid;
@property (readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)a0;
- (void)appendNavJunctionsInWorldRect:(const void *)a0 junctions:(id)a1;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(void *)a0 distanceThreshold:(double)a1;
- (id)findTileEdgeJunctionAtCoordinate:(struct Matrix<float, 2, 1> { float x0[2]; })a0;
- (id)initWithTile:(const void *)a0;
- (void)initializeJunctionInfos;
- (id)junctionAtCoordinate:(struct Matrix<float, 2, 1> { float x0[2]; })a0;
- (id)junctionForGeoJunction:(struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *)a0;

@end
