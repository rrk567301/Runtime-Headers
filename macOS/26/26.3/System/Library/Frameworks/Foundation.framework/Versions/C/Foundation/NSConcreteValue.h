@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (const void *)_value;
- (id)description;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
