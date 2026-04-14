@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
