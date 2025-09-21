@class NSArray, NSMutableArray;

@interface VCPAdaptiveSegmentAnalyzer : NSObject {
    NSMutableArray *_adaptiveSegments;
    struct vector<dlib::matrix<float, 1, 432>, std::allocator<dlib::matrix<float, 1, 432>>> { void *__begin_; void *__end_; void *__cap_; } _featureArray;
    NSArray *_videoEmbeddings;
    unsigned long long _embeddingSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adaptiveSegments;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })averagedEmbedding:(id)a0 startTime:(float)a1 endTime:(float)a2;
- (int)calculateAdaptiveSegments:(id)a0;
- (int)calculateAdaptiveSegments:(id)a0 videoEmbeddingsX3D:(id)a1;
- (float)calculateTimestamp:(unsigned long long)a0 videoEmbeddings:(id)a1;

@end
