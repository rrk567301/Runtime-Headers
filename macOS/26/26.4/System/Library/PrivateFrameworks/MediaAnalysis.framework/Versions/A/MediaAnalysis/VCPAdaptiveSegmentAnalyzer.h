@class NSArray, NSMutableArray;

@interface VCPAdaptiveSegmentAnalyzer : NSObject {
    NSMutableArray *_adaptiveSegments;
    struct vector<dlib::matrix<float, 1, 432>, std::allocator<dlib::matrix<float, 1, 432>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _featureArray;
    NSArray *_videoEmbeddings;
    unsigned long long _embeddingSize;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)adaptiveSegments;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct { float *x0; } x2; })averagedEmbedding:(id)a0 startTime:(float)a1 endTime:(float)a2;
- (int)calculateAdaptiveSegments:(id)a0;
- (int)calculateAdaptiveSegments:(id)a0 videoEmbeddingsX3D:(id)a1;
- (float)calculateTimestamp:(unsigned long long)a0 videoEmbeddings:(id)a1;

@end
