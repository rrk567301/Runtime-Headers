@class NSDictionary, NSMutableDictionary;

@interface TSCHChartPieStraightLineLabelPlacement : TSCHChartPieLabelPlacement {
    NSDictionary *_seriesIndexToWedgeLayoutInfo;
    NSDictionary *_seriesIndexToAllWedgeLayoutInfosToTheLeft;
    unsigned long long _CGPointCellSize;
    NSMutableDictionary *_spatialMap;
    NSMutableDictionary *_seriesIndexToConflictingWedgeLayoutInfos;
}

- (void).cxx_destruct;
- (id)updateLabelTransformsToPreventOverlap;
- (id)newCalloutLinePaths:(id)a0 startLineEnd:(id)a1 outStartLineEndPath:(id *)a2 endLineEnd:(id)a3 outEndLineEndPath:(id *)a4 stroke:(id)a5 outStroke:(id *)a6 context:(struct CGContext { } *)a7 contextScale:(float)a8;
- (struct CGPoint { double x0; double x1; })calloutLineStartpointForWedgeLayoutInfo:(id)a0;
- (struct CGPoint { double x0; double x1; })calloutLineEndpointForWedgeLayoutInfo:(id)a0;
- (void)setUpCaches;
- (void)createSeriesIndexToWedgeLayoutInfoMap;
- (void)createSeriesIndexToAllWedgeLayoutInfosToTheLeftMap;
- (void)createSpatialMap;
- (void)createSeriesIndexToConflictingWedgeLayoutInfosMap;
- (void)invalidateWedgeLayoutInfo:(id)a0 oldSetOfKeysForWedgeLayoutInfo:(id)a1;
- (void)updateSpatialMapWithInvalidatedWedgeLayoutInfo:(id)a0 oldSetOfKeysForWedgeLayoutInfo:(id)a1;
- (void)updateSeriesIndexToConflictingWedgeLayoutInfosMapForInvalidatedWedgeLayoutInfo:(id)a0 oldSetOfKeysForWedgeLayoutInfo:(id)a1;
- (void)updateConflictsForWedgeLayoutInfo:(id)a0 wedgeLayoutInfosThatShareCells:(id)a1;
- (id)setOfKeysForWedgeLayoutInfo:(id)a0;
- (struct CGPoint { double x0; double x1; })cellForPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)spatialMapCellSize;
- (id)wedgeLayoutInfosToTheLeftOfWedgeLayoutInfo:(id)a0;
- (void)fixTitleConflictsIfNeeded;
- (void)fixConflictsForWedgeLayoutInfos;
- (BOOL)shouldShiftWedgeLayoutInfo:(id)a0;
- (double)shiftAmountForWedgeLayoutInfo:(id)a0;
- (void)shiftLabelOutwards:(id)a0 shiftAmount:(double)a1 invalidateCahes:(BOOL)a2;
- (BOOL)conflictsExist;
- (id)wedgeLayoutInfosThatShareCellsWithWedgeLayoutInfo:(id)a0;
- (id)wedgeLayoutInfo:(id)a0 conflictsWithWedgeLayoutInfos:(id)a1;

@end
