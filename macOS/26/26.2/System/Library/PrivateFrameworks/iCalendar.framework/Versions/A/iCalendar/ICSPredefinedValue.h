@interface ICSPredefinedValue : NSNumber {
    long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:(long long)a0;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (id)initWithCoder:(id)a0;
- (id)initWithLong:(long long)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)longValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
