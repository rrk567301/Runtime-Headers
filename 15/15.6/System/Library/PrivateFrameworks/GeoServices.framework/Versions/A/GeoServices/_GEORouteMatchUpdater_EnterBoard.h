@class GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater {
    GEOPBTransitStop *_transitStop;
    GEOPBTransitStation *_transitStation;
    struct { double latitude; double longitude; } _entranceCoordinate;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateApproaching;
    struct PolylineCoordinate { unsigned int index; float offset; } _routeCoordinateAtStation;
    GEOComposedRouteStep *_enterStationStep;
    GEOComposedRouteStep *_boardVehicleStep;
    GEOComposedTransitTripRouteStep *_rideStep;
    char _hasEnteredStation;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)_hasLocationEnteredStation:(id)a0 routeMatch:(id)a1;
- (char)_hasLocationExitedStation:(id)a0;
- (char)_isLocationNearAccessPoint:(id)a0;
- (char)_isLocationNearEndOfWalkingSegment:(id)a0;
- (char)_isLocationNearTransitNode:(id)a0;
- (id)initWithTransitRouteMatcher:(id)a0 boardVehicleStep:(id)a1;
- (char)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
