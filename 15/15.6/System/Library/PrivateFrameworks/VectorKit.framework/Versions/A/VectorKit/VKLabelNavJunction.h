@class VKLabelNavRoad, NSString, VKLabelNavRoadLabel, NSMutableArray;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    char _foundRoads;
    unsigned char _largestRoadClass;
    void *_labelFeature;
    char _areLabelsDisabled;
    char _cachedSignVisibility[8];
    char _isVisibilityCached[8];
    double _sortValue;
}

@property (readonly, nonatomic) struct Mercator3<double> { double _e[3]; } mercatorCoordinate;
@property (readonly, nonatomic) struct shared_ptr<md::LabelTile> { struct LabelTile *__ptr_; struct __shared_weak_count *__cntrl_; } tile;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *geoJunction;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> { float _e[2]; } tileCoordinate;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) NSMutableArray *roads;
@property (readonly, weak, nonatomic) VKLabelNavRoad *outgoingRoad;
@property (readonly, weak, nonatomic) VKLabelNavRoad *incomingRoad;
@property (nonatomic) float distanceFromPreviousShieldLabel;
@property (nonatomic) char isOnDualCarriageway;
@property (readonly, nonatomic) char hasSharedRouteDirection;
@property (nonatomic) struct Matrix<float, 2, 1> { float _e[2]; } sharedRouteDirection;
@property (readonly, nonatomic) char isOnRoute;
@property (readonly, nonatomic) char isIntraRamp;
@property (readonly, nonatomic) char isTileEdgeJunction;
@property (nonatomic) char isRouteRefineJunction;
@property (readonly, nonatomic) char isRoadTerminus;
@property (readonly, nonatomic) char isIntersection;
@property (readonly, nonatomic) char isMultiRoadIntersection;
@property (readonly, nonatomic) char isAwayFromRoute;
@property (readonly, nonatomic) char isOffRouteGraph;
@property (readonly, nonatomic) char isOverpass;
@property (nonatomic) char isRouteOverpass;
@property (readonly, nonatomic) unsigned char largestRoadClass;
@property (nonatomic) unsigned long long depthFromRoute;
@property (weak, nonatomic) VKLabelNavJunction *overpassJunction;
@property (readonly, nonatomic) double worldUnitsPerMeter;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) VKLabelNavRoadLabel *junctionSign;
@property (readonly, nonatomic) char isVisible;
@property (readonly, nonatomic) int requiredLabelPlacement;
@property (nonatomic) int preferredLabelPlacement;
@property (readonly, nonatomic) char isRamp;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) char isStartOfRoadName;
@property (readonly, nonatomic) char isInGuidance;
@property (readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property (readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property (readonly, nonatomic) char isGuidanceStepStart;
@property (readonly, nonatomic) char isEtaFeature;
@property (readonly, nonatomic) char isTrafficCameraFeature;
@property (nonatomic) char isPicked;
@property (readonly, nonatomic) char isValid;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct Mercator3<double> { double x0[3]; })_anchorCoordinateForSignOrientation:(unsigned char)a0;
- (unsigned char)_signOrientationWithDrivingSide:(char)a0;
- (void)_updateWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)_updateWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 threshold:(double)a1;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; struct GeoCodecsRoadEdge { struct GeoCodecsRoadFeature *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction *x5; struct GeoCodecsConnectivityJunction *x6; } x2; unsigned long long x3; unsigned long long x4; } *)a0 atA:(char)a1;
- (void)createLabelWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 isDrivingSideRight:(char)a1 artworkCache:(void *)a2;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)a0;
- (void)findRoads;
- (id)initWithGEOJunction:(struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *)a0 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 tile:(const void *)a2;
- (id)initWithRoadEdge:(const struct GeoCodecsRoadEdge { struct GeoCodecsRoadFeature *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction *x5; struct GeoCodecsConnectivityJunction *x6; } *)a0 atA:(char)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 tile:(const void *)a3;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (char)matchesLocationForJunction:(id)a0;
- (void)prepareStyleVarsWithContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;

@end
