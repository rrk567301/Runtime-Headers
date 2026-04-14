@class RSFloorPlan;

@interface RSScanUIFormatter : NSObject {
    RSFloorPlan *_prevFloorPlan;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)processWithFloorPlan:(id)a0 temporalMeta:(id)a1 geometryMeta:(id)a2;
- (id)runWithFloorPlan:(id)a0 temporalMeta:(id)a1 geometryMeta:(id)a2;

@end
