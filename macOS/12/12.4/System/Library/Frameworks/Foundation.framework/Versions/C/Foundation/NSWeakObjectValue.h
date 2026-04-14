@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (const char *)objCType;
- (id)initWithObject:(id)a0;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)weakObjectValue;
- (id)nonretainedObjectValue;
- (BOOL)isEqualToValue:(id)a0;

@end
