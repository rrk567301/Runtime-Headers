@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (void)initialize;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (const char *)objCType;
- (void)encodeWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (char)isEqualToValue:(id)a0;
- (char)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(char)a2;
- (const void *)_value;

@end
