@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (const char *)objCType;
- (unsigned long long)hash;
- (BOOL)isEqualToValue:(id)a0;
- (void)getValue:(void *)a0;
- (const void *)_value;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;

@end
