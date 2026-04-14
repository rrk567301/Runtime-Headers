@class NSDictionary;

@interface _SGTLegacySpotlightItemDictionary : NSDictionary {
    struct __MDQuery { } *query;
    long long index;
    NSDictionary *collectedAttributes;
}

- (void)setIndex:(unsigned long long)a0;
- (id)initWithQuery:(struct __MDQuery { } *)a0;
- (id)valueForAttribute:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
