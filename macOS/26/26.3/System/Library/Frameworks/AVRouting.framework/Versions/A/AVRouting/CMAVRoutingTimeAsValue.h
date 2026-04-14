@interface CMAVRoutingTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (long long)longLongValue;
- (unsigned char)unsignedCharValue;
- (float)floatValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (int)intValue;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (long long)integerValue;
- (double)doubleValue;
- (unsigned int)unsignedIntValue;
- (BOOL)boolValue;
- (unsigned short)unsignedShortValue;
- (Class)classForCoder;
- (long long)longValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)unsignedLongValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (short)shortValue;

@end
