@class NSArray, RSFloorPlan;

@interface RSFloorPlanBoundaryRefinement : NSObject {
    struct unique_ptr<rs_erf::EdgeRefinement, std::default_delete<rs_erf::EdgeRefinement>> { struct __compressed_pair<rs_erf::EdgeRefinement *, std::default_delete<rs_erf::EdgeRefinement>> { struct EdgeRefinement *__value_; } __ptr_; } _processor;
    BOOL _initProcessor;
    NSArray *_prevInputWindows;
    NSArray *_prevInputDoors;
    RSFloorPlan *_prevOutputFloorPlan;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)setupRefinementProcessor:(id)a0;
- (id)runWithFloorPlan:(id)a0 rsFrame:(id)a1;

@end
