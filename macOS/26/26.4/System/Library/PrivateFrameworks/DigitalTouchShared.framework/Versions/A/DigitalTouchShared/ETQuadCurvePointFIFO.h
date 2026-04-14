@interface ETQuadCurvePointFIFO : ETPointFIFO

@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } prevPoints;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } points;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } controlPoints;
@property (nonatomic) void /* unknown type, empty encoding */ lastPoint;
@property (nonatomic) float unitSize;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (copy) id /* block */ emissionHandler;

- (void)clear;
- (void)flush;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFIFO:(id)a0;
- (void)addPoints:(void *)a0 count:(unsigned long long)a1;

@end
