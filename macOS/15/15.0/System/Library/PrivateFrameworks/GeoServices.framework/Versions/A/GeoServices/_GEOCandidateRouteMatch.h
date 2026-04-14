@interface _GEOCandidateRouteMatch : NSObject {
    BOOL _isGoodMatch;
    double _score;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinate;
    struct { double latitude; double longitude; } _locationCoordinate;
    unsigned long long _stepIndex;
    double _distanceFromRoute;
    double _maxDistance;
    double _distanceMatchScore;
    double _distanceWeight;
    double _courseDelta;
    double _maxCourseDelta;
    double _courseMatchScore;
    double _courseWeight;
    double _distanceAlongRouteFromPreviousMatch;
    double _distanceTraveledMatchScore;
    double _distanceTraveledWeight;
}

- (id)description;
- (id).cxx_construct;
- (id)initWithRoute:(id)a0;

@end
