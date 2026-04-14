@interface GEOMapFeatureMultiSegmentRoadFinder : GEOMapFeatureIntersectedRoadFinder

- (id)findConnectedSegmentsForRoads:(id)a0 directionality:(unsigned long long)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findConnectedSegmentsForRoad:(id)a0 directionality:(unsigned long long)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_roadForRoadSegments:(id)a0;
- (void)_recursivelyFindRoadSegmentsWithMuid:(unsigned long long)a0 segments:(id)a1 directionality:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
