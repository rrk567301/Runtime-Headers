@interface VCHistogram : NSObject {
    unsigned int *_buckets;
}

@property (readonly) const unsigned int *ranges;
@property (readonly) unsigned int bucketCount;

- (void)reset;
- (void)dealloc;
- (BOOL)merge:(id)a0;
- (void)addValue:(unsigned int)a0;
- (id)array;
- (id)description;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0 increment:(unsigned int)a1;
- (void)addValue:(unsigned int)a0 withIncrement:(unsigned int)a1;
- (unsigned int)bucketValueAtIndex:(unsigned int)a0;
- (void)convertHistogramIntoComplementaryPercentage:(id)a0;
- (void)convertHistogramIntoPercentageUsingValuesFrom:(id)a0;
- (id)initWithRanges:(const unsigned int *)a0 bucketValues:(id)a1;

@end
