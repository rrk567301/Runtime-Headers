@class NSArray, NSMutableDictionary, VCPCNNModelEspresso;

@interface VCPVideoCNNAutoplay : VCPVideoCNNTask {
    NSMutableDictionary *_summaryResults;
    NSMutableDictionary *_settlingGatingResults;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    struct vector<float *, std::allocator<float *>> { float **__begin_; float **__end_; struct { float **__cap_; } ; } _inputsData;
    float *_analysisInput;
    BOOL _skip;
}

- (int)run:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)results;
- (id)init;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)loadAnalysisResults:(id)a0 audioResults:(id)a1;

@end
