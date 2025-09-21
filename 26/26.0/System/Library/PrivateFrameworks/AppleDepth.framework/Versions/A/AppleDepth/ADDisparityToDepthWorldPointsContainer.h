@interface ADDisparityToDepthWorldPointsContainer : NSObject {
    struct unique_ptr<DisparityToDepth::WorldPointsContainer, std::default_delete<DisparityToDepth::WorldPointsContainer>> { struct WorldPointsContainer *__ptr_; } _worldPoints;
}

- (id)initWithParameters:(id)a0;
- (id).cxx_construct;
- (unsigned long long)size;
- (void).cxx_destruct;
- (struct ADDisparityToDepthFitWorldPoint { float x0; int x1; })getPointFromContainer:(int)a0;
- (void)push:(struct ADDisparityToDepthFitWorldPoint { float x0; int x1; } *)a0 pointCount:(unsigned long long)a1;

@end
