@interface AWDHistogram : NSObject {
    unsigned int *histogram;
    unsigned int *buckets;
    float *floatBuckets;
    unsigned int size;
}

- (void)dealloc;
- (id)array;
- (void)reset;
- (void)addValue:(unsigned int)a0;
- (void)print;
- (id)initWithBuckets:(unsigned int *)a0 size:(unsigned int)a1;
- (id)initWithFloatBuckets:(float *)a0 size:(unsigned int)a1;
- (void)addValue:(unsigned int)a0 withIncrements:(unsigned int)a1;
- (void)addFloatValue:(float)a0;
- (void)reduceFrequencyByFactor:(unsigned int)a0;
- (id)newArray;

@end
