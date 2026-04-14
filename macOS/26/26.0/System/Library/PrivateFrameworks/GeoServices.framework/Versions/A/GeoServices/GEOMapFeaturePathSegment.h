@class GEOMapFeatureRoad;

@interface GEOMapFeaturePathSegment : NSObject {
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> { struct *__begin_; struct *__end_; struct *__cap_; } _coordinates;
}

@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) GEOMapFeatureRoad *road;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })coordinateAt:(unsigned long long)a0;
- (id)initWithRoad:(id)a0 startFraction:(double)a1 endFraction:(double)a2;

@end
