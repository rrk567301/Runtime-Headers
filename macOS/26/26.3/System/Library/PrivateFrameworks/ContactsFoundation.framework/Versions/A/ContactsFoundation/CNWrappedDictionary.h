@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
