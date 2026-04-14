@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)nonretainedObjectValue;
- (id)initWithObject:(id)a0;
- (id)weakObjectValue;
- (BOOL)isEqualToValue:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
