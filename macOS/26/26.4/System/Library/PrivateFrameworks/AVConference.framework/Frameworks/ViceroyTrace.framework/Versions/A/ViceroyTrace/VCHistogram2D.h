@interface VCHistogram2D : VCHistogram {
    unsigned int **_buckets2D;
}

- (void)reset;
- (id)description;
- (void)dealloc;
- (void)addValue:(unsigned int)a0 withArray:(id)a1;
- (id)initWithRanges:(const unsigned int *)a0 bucketValues:(id)a1;

@end
