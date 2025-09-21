@interface _PASBloomFilterDummy : _PASBloomFilter {
    char _result;
}

+ (id)instanceThatAlwaysReturns:(char)a0;

- (char)getWithHashes:(id)a0;
- (id)initWithResult:(char)a0;

@end
