@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (unsigned long long)count;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)keyEnumerator;
- (void)dealloc;

@end
