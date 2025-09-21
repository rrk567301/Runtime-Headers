@interface ADRansacLine2DSolver : NSObject {
    struct unique_ptr<DisparityToDepth::Ransac<float, float>, std::default_delete<DisparityToDepth::Ransac<float, float>>> { void *__ptr_; } _solver;
    struct unique_ptr<DisparityToDepth::RansacLine2DModel, std::default_delete<DisparityToDepth::RansacLine2DModel>> { struct RansacLine2DModel *__ptr_; } _model2D;
}

- (id)initWithParameters:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fitWithX:(float *)a0 y:(float *)a1 count:(unsigned int)a2;

@end
