@class NSArray;

@interface MLProbabilityDictionaryArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    NSArray *_array;
    unsigned long long _count;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)probabilityAtIndex:(unsigned long long)a0;
- (unsigned long long)maxElementIndex;
- (id)initWithArray:(id)a0 count:(unsigned long long)a1;

@end
