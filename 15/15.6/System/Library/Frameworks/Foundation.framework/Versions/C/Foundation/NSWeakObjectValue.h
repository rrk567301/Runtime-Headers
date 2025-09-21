@interface NSWeakObjectValue : NSValue {
    void *_value;
    id _object;
    char _useFallback;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (const char *)objCType;
- (id)initWithObject:(id)a0;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (char)isEqualToValue:(id)a0;
- (id)weakObjectValue;
- (id)nonretainedObjectValue;

@end
