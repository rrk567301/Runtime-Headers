@interface GEODrivingRouteMatcher : GEORouteMatcher {
    double _differentLegScorePenalty;
}

- (id)initWithRoute:(id)a0;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (BOOL)_supportsSnapping;
- (double)_courseFromLocation:(id)a0;
- (struct { double x0; double x1; })_coordinateFromLocation:(id)a0;
- (id)_startStepForPreviousRouteMatch:(id)a0;
- (double)_maxMatchDistance:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 previousRouteMatch:(id)a2 timeSinceTunnel:(double)a3;
- (double)_maxCourseDelta:(id)a0 previousRouteMatch:(id)a1 timeSinceTunnel:(double)a2;
- (double)_courseWeightForLocation:(id)a0 accuracyType:(long long)a1;
- (double)_modifiedHorizontalAccuracy:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (double)_roadWidthForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)_modifiedCourseAccuracyForLocation:(id)a0 previousRouteMatch:(id)a1;

@end
