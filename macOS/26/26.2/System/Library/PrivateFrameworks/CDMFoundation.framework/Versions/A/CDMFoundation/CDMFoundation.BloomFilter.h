@class NSString;

@interface CDMFoundation.BloomFilter : NSObject {
    void /* unknown type, empty encoding */ bitVector;
    void /* unknown type, empty encoding */ numberOfBits;
    void /* unknown type, empty encoding */ numberOfHashes;
    void /* unknown type, empty encoding */ seed;
    void /* unknown type, empty encoding */ expectedNumberOfItems;
    void /* unknown type, empty encoding */ numberOfItems;
    void /* function */ name;
    void /* unknown type, empty encoding */ expectedItemsBuffer;
}

@property (nonatomic, readonly) double falsePositiveRate;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (BOOL)containsWithData:(id)a0;

@end
