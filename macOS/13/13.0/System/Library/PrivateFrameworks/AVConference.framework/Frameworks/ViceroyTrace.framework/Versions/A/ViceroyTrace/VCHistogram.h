@interface VCHistogram : NSObject {
    unsigned int *_buckets;
}

@property (readonly) const unsigned int *ranges;
@property (readonly) unsigned int bucketCount;

+ (const unsigned int *)bucketWithType:(int)a0 count:(unsigned int *)a1;
+ (id)rangesDescription:(int)a0;

- (void)dealloc;
- (id)description;
- (id)array;
- (void)reset;
- (BOOL)merge:(id)a0;
- (void)addValue:(unsigned int)a0;
- (id)initWithType:(int)a0 bucketValues:(id)a1;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0 increment:(unsigned int)a1;
- (void)addValue:(unsigned int)a0 withIncrement:(unsigned int)a1;
- (unsigned int)bucketValueAtIndex:(unsigned int)a0;

@end
