@interface TSUIntegerKeyDictionaryKeyEnumerator : NSObject {
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)a0;
- (long long)nextKey;

@end
