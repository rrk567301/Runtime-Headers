@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
