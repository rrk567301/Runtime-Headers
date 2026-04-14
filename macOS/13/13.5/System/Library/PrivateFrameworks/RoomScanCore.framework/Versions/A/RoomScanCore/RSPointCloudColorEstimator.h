@class RSPointCloud, RSFloorPlan;

@interface RSPointCloudColorEstimator : NSObject {
    RSPointCloud *_worldpc;
    RSFloorPlan *_floorplan;
}

- (void).cxx_destruct;
- (void)_estimateObjectColor:(id)a0 withPointCloud:(id)a1 method:(int)a2;
- (void)_estimateObjectsColor:(id)a0 withPointCloud:(id)a1;
- (void)_estimateSurfacesColor:(id)a0 withPointCloud:(id)a1 thickness:(float)a2 semanticLabel:(unsigned char)a3 method:(int)a4 sameLabelShareColor:(BOOL)a5;
- (void)estimateFloorPlanColor:(id)a0 withPointCloud:(id)a1;
- (void)estimateFloorPlanColor:(id)a0 withPointCloud:(id)a1 method:(int)a2 sameLabelShareColor:(BOOL)a3;
- (void)setFixedFloorPlanColor:(id)a0 withPointCloud:(id)a1;

@end
