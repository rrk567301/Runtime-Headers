@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (const void *)_value;
- (const char *)objCType;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
