@class AFBDictionary;

@interface AFBDictionaryEnumerator : NSEnumerator {
    AFBDictionary *_dict;
    unsigned long long _index;
}

- (id)initWithDictionary:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;

@end
