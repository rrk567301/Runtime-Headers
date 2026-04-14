@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (id)initWithDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void).cxx_destruct;

@end
