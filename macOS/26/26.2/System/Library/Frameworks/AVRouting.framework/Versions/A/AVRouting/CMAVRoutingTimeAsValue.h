@interface CMAVRoutingTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (BOOL)isEqualToValue:(id)a0;
- (char)charValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (long long)integerValue;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (id)description;
- (double)doubleValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (unsigned char)unsignedCharValue;

@end
