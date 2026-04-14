@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToDictionary:(id)a0;

@end
