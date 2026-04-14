@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor

- (void)_recalculateETAWithRouteMatch:(id)a0;
- (void)_fetchETAWithRouteMatch:(id)a0;
- (void)checkRouteForLocation:(id)a0;
- (void)_sendETARequestWithRouteMatch:(id)a0 updater:(id)a1;
- (BOOL)_checkForArrival:(id)a0 routeMatch:(id)a1;

@end
