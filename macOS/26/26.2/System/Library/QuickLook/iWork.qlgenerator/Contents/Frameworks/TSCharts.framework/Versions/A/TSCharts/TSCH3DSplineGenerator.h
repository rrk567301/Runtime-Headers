@interface TSCH3DSplineGenerator : NSObject {
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _controlPts;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct { long long *__cap_; } ; } _splineExclude;
}

@property (nonatomic) float detail;
@property (nonatomic) float tension;
@property (nonatomic) float adaptiveThreshold;

+ (id)generator;

- (BOOL)isClosed;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)generatePoints:(void *)a0;
- (void)calcControlMatrix:(void *)a0 pointNum:(long long)a1;
- (void *)controlPts;
- (void *)splineExclude;

@end
