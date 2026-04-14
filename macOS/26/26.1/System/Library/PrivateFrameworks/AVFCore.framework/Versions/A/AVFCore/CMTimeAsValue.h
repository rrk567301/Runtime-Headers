@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (const char *)objCType;
- (long long)integerValue;
- (BOOL)boolValue;
- (double)doubleValue;
- (short)shortValue;
- (unsigned long long)hash;
- (int)intValue;
- (char)charValue;
- (BOOL)isEqualToValue:(id)a0;
- (void)getValue:(void *)a0;
- (unsigned long long)unsignedLongValue;
- (Class)classForCoder;
- (long long)longValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)unsignedIntValue;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)unsignedLongLongValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;

@end
