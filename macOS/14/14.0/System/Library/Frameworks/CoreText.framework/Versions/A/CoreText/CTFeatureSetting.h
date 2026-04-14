@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;

@end
