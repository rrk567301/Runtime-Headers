@class NSData, NEBitVector;

@interface NEBloomFilter : NSObject {
    NEBitVector *_bitVector;
}

@property (nonatomic) unsigned int numberOfItems;
@property (nonatomic) double falsePositiveTolerance;
@property (nonatomic) unsigned int numberOfBits;
@property (nonatomic) unsigned int numberOfHashes;
@property (nonatomic) unsigned int murmurSeed;
@property (retain, nonatomic) NSData *tag;
@property (retain, nonatomic) NSData *bitVectorBuffer;

+ (int)getNumberOfHashes:(unsigned int)a0 numberOfBits:(int)a1;
+ (BOOL)containsWithBitmap:(char *)a0 numberOfBits:(unsigned int)a1 numberOfHashes:(unsigned int)a2 murmurSeed:(unsigned int)a3 value:(const char *)a4;
+ (double)getFalsePositiveProbability:(unsigned int)a0 numberOfBits:(unsigned int)a1 numberOfHashes:(unsigned int)a2;
+ (int)getNumberOfBits:(unsigned int)a0 falsePositiveTolerance:(double)a1;
+ (void)insertWithBitmap:(char *)a0 numberOfBits:(unsigned int)a1 numberOfHashes:(unsigned int)a2 murmurSeed:(unsigned int)a3 value:(const char *)a4;
+ (BOOL)mmapFromFile:(const char *)a0 bloomFilter:(struct ne_bloom_filter { struct ne_bloom_filter_header { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x0; unsigned int x1; void *x2; void *x3; char *x4; void *x5; unsigned int x6; double x7; } *)a1;
+ (char *)mmapToFile:(const char *)a0 data:(char *)a1 dataLength:(unsigned int)a2 numberOfBits:(unsigned int)a3 numberOfHashes:(unsigned int)a4 murmurSeed:(unsigned int)a5 tag:(id)a6;

- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (void)insert:(id)a0;
- (id)getFilterTag;
- (id)initFromFile:(id)a0;
- (id)initWithData:(id)a0 numberOfBits:(unsigned int)a1 numberOfHashes:(unsigned int)a2 murmurSeed:(unsigned int)a3 mmapFilename:(id)a4 tag:(id)a5;
- (id)initWithNumberOfItems:(unsigned int)a0 falsePositiveTolerance:(double)a1;

@end
