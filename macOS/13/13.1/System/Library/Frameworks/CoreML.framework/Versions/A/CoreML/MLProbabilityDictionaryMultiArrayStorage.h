@class MLMultiArray;

@interface MLProbabilityDictionaryMultiArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    MLMultiArray *_multiArray;
    unsigned long long _count;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)probabilityAtIndex:(unsigned long long)a0;
- (unsigned long long)maxElementIndex;
- (id)initWithMultiArray:(id)a0 count:(unsigned long long)a1;

@end
