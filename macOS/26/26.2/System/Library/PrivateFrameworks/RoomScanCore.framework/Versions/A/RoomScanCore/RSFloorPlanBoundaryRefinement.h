@class NSArray, RSFloorPlan;

@interface RSFloorPlanBoundaryRefinement : NSObject {
    struct unique_ptr<rs_erf::EdgeRefinement, std::default_delete<rs_erf::EdgeRefinement>> { struct { struct EdgeRefinement *__ptr_; } ; } _processor;
    BOOL _initProcessor;
    NSArray *_prevInputWindows;
    NSArray *_prevInputDoors;
    RSFloorPlan *_prevOutputFloorPlan;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
