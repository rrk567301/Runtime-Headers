@interface _PASBloomFilterForWriting : _PASBloomFilter

+ (id)bloomFilterInMemoryWithNumberOfValuesN:(unsigned long long)a0 errorRateP:(float)a1;

- (void)setWithHashes:(id)a0;
- (char)saveToFile:(id)a0;

@end
