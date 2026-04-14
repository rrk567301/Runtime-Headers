@interface PMLSparseVector : NSObject

@property (nonatomic) unsigned long long numberOfNonZeroValues;
@property (nonatomic) long long *sparseIndices;
@property (nonatomic) float *sparseValues;
@property (readonly, nonatomic) unsigned long long length;

+ (id)sparseVectorFromDense:(id)a0;
+ (id)sparseVectorWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 block:(id /* block */)a2;
+ (void)sparseVectorWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 isSparseIndexInt64:(BOOL)a2 sparseIndices:(const void *)a3 sparseValues:(const float *)a4 toDenseValues:(float *)a5 withLength:(unsigned long long)a6;
+ (id)sparseVectorEmptyWithLength:(unsigned long long)a0;
+ (id)sparseVectorFromDense:(const float *)a0 length:(unsigned long long)a1;
+ (id)sparseVectorFromNumbers:(id)a0;
+ (id)sparseVectorFromNumbers:(id)a0 indices:(id)a1 length:(unsigned long long)a2;

- (void)dealloc;
- (id)init;
- (void)setLength:(unsigned long long)a0;
- (float)minValue;
- (float)maxValue;
- (float)valueAtIndex:(unsigned long long)a0;
- (id)vectorWithConstantColumn;
- (void)scaleInPlaceWithInversedFactor:(float)a0;
- (void)sparseVectorToDense:(float *)a0 length:(unsigned long long)a1;
- (id)indicesData;
- (id)valuesData;
- (float)l2norm;
- (float)l1norm;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (void)scaleWithVectorNormalization:(long long)a0;
- (void)addEndId:(long long)a0 paddingId:(long long)a1 withMaxVectorLength:(unsigned long long)a2;
- (void)convertToBagOfIds;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indices:(long long *)a2 values:(float *)a3;
- (float)maxAbsValue;
- (void)applyOneHotNormalization;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indicesData:(id)a2 valuesData:(id)a3;
- (id)indicesAsUInt16Data;
- (id)quantizedValuesAsUInt8DataWithMin:(float)a0 max:(float)a1;
- (void)processNonZeroValuesInPlaceWithBlock:(id /* block */)a0;

@end
