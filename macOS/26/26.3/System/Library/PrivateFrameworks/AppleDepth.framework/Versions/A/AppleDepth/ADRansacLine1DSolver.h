@interface ADRansacLine1DSolver : NSObject {
    struct unique_ptr<DisparityToDepth::Ransac<float, float>, std::default_delete<DisparityToDepth::Ransac<float, float>>> { struct { void *__ptr_; } ; } _solver;
    struct unique_ptr<DisparityToDepth::RansacLineModel, std::default_delete<DisparityToDepth::RansacLineModel>> { struct { struct RansacLineModel *__ptr_; } ; } _model1D;
}

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)fitWithX:(float *)a0 y:(float *)a1 count:(unsigned int)a2;

@end
