@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)unsignedIntValue;
- (long long)longLongValue;
- (long long)longValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (const char *)objCType;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (BOOL)isEqualToValue:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;

@end
