@class NBObjCBloomFilterReader;

@interface NBBloomFilterReader : NSObject

@property (readonly, nonatomic) NBObjCBloomFilterReader *bloomFilterReader;

- (void).cxx_destruct;
- (BOOL)maybeContainsString:(id)a0;
- (id)initWithData:(id)a0 hashFunctionCount:(unsigned long long)a1;

@end
