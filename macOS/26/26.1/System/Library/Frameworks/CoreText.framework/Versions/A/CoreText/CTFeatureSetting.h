@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (BOOL)isEqualToDictionary:(id)a0;
- (unsigned long long)hash;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (BOOL)isEqual:(id)a0;

@end
