@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)keyEnumerator;

@end
