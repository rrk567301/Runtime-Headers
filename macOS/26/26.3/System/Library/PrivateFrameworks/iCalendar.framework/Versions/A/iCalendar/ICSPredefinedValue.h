@interface ICSPredefinedValue : NSNumber {
    long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:(long long)a0;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (id)initWithLong:(long long)a0;
- (Class)classForCoder;
- (long long)longValue;
- (id)initWithCoder:(id)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)encodeWithCoder:(id)a0;

@end
