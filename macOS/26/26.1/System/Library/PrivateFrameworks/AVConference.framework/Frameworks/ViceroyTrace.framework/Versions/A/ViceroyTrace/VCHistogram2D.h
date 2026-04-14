@interface VCHistogram2D : VCHistogram {
    unsigned int **_buckets2D;
}

- (id)description;
- (void)dealloc;
- (void)reset;
- (void)addValue:(unsigned int)a0 withArray:(id)a1;
- (id)initWithRanges:(const unsigned int *)a0 bucketValues:(id)a1;

@end
