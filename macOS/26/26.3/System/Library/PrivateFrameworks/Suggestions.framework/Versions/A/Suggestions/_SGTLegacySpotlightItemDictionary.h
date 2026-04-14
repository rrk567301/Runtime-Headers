@class NSDictionary;

@interface _SGTLegacySpotlightItemDictionary : NSDictionary {
    struct __MDQuery { } *query;
    long long index;
    NSDictionary *collectedAttributes;
}

- (id)initWithQuery:(struct __MDQuery { } *)a0;
- (id)valueForAttribute:(id)a0;
- (unsigned long long)count;
- (id)allKeys;
- (void)setIndex:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;

@end
