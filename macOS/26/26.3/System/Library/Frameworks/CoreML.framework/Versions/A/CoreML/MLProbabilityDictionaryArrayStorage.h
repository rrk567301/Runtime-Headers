@class NSArray;

@interface MLProbabilityDictionaryArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    NSArray *_array;
    unsigned long long _count;
}

- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)maxElementIndex;
- (id)probabilityAtIndex:(unsigned long long)a0;

@end
