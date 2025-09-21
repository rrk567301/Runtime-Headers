@interface MSVBloomFilter : NSObject <NSSecureCoding> {
    struct __CFBitVector { } *_vector;
    long long _vectorCapacity;
    unsigned long long _murmurSeed;
    long long _hashCount;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) float falsePositiveTolerance;
@property (readonly, nonatomic) float falsePositiveProbability;
@property (readonly, nonatomic) long long estimatedCount;

- (void)dealloc;
- (id)description;
- (char)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCapacity:(long long)a0 falsePositiveTolerance:(float)a1;
- (unsigned long long)_fnvHashObject:(id)a0;
- (unsigned long long)_murmur2HashObject:(id)a0;
- (id)_vectorIndexSetForObject:(id)a0;
- (id)initWithCapacity:(long long)a0 falsePositiveTolerance:(float)a1 murmurSeed:(unsigned long long)a2;

@end
