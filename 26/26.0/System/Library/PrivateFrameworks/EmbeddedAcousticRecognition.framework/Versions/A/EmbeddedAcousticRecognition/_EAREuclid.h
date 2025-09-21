@interface _EAREuclid : NSObject {
    struct unique_ptr<quasar::QuasarEuclid, std::default_delete<quasar::QuasarEuclid>> { struct QuasarEuclid *__ptr_; } _quasarEuclid;
}

+ (void)initialize;

- (id)patchVersion;
- (id)minorVersion;
- (id)majorVersion;
- (id).cxx_construct;
- (id)fullVersion;
- (void).cxx_destruct;
- (id)maxInputLength;
- (id)computeEmbedding:(id)a0;
- (id)computeEmbeddings:(id)a0;
- (id)distanceBetweenSource:(id)a0 target:(id)a1;
- (id)embeddingDim;
- (id)findNearestNeighbors:(id)a0 numberOfNeighbors:(long long)a1;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1 initFlag:(long long)a2;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1 initFlag:(long long)a2 language:(id)a3;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1 initFlag:(long long)a2 language:(id)a3 overrides:(id)a4;

@end
