@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _percentOfTotal;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _rotation;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _explode;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)updateValues;
- (void)updateLabels;
- (char)anyHasExplosion;
- (char)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (id)boundsGeometryForSeries:(id)a0 index:(void *)a1;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (float)explosionAtElementIndex:(void *)a0;
- (float)explosionAtElementIndex:(void *)a0 propertyAccessor:(id)a1;
- (long long)flatIndex:(void *)a0;
- (float)percentOfTotalAtElementIndex:(void *)a0;
- (float)rotationAtElementIndex:(void *)a0;
- (void)setExplosion:(float)a0 atElementIndex:(void *)a1;
- (void)setPercentOfTotal:(float)a0 atElementIndex:(void *)a1;
- (void)setRotation:(float)a0 atElementIndex:(void *)a1;

@end
