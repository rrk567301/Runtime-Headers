@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (id)initWithObject:(id)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)nonretainedObjectValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)weakObjectValue;

@end
