@interface CMAVRoutingTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (long long)integerValue;
- (const char *)objCType;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (short)shortValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToValue:(id)a0;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned int)unsignedIntValue;
- (char)charValue;
- (id)initWithCoder:(id)a0;
- (unsigned long long)unsignedLongValue;
- (int)intValue;
- (unsigned long long)hash;
- (long long)longValue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;

@end
