@class VIBitVector;

@interface VIBloomFilter : NSObject {
    VIBitVector *_bits;
}

@property (readonly) unsigned int seed;
@property (readonly) unsigned long long numberOfBits;
@property (readonly) unsigned int numberOfHashes;
@property (readonly) unsigned int numberOfAddedItems;

- (id)description;
- (id)data;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (BOOL)containsItem:(id)a0;
- (id)initWithNumberOfHashes:(unsigned int)a0 numberOfBits:(unsigned long long)a1 seed:(unsigned int)a2;
- (id)initWithData:(id)a0 numberOfHashes:(unsigned int)a1 numberOfBits:(unsigned int)a2 seed:(unsigned int)a3 error:(id *)a4;

@end
