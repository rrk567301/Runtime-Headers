@interface UPPreprocessorOutput : NSObject {
    struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } shape; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } data; } _embeddingsTensor;
    struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } shape; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } data; } _spanLabelsTensor;
    struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> { struct Token *__begin_; struct Token *__end_; struct Token *__cap_; } _outputTokens;
}

@property (readonly) void *embeddingsTensor;
@property (readonly) void *spanLabelsTensor;
@property (readonly) void *outputTokens;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEmbeddingsTensor:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; unsigned long long *x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; } x1; })a0 spanLabelsTensor:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; unsigned long long *x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; } x1; })a1 outputTokens:(struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> { struct Token *x0; struct Token *x1; struct Token *x2; })a2;

@end
