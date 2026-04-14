@interface CMAVRoutingTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (void)getValue:(void *)a0;
- (unsigned int)unsignedIntValue;
- (const char *)objCType;
- (unsigned long long)unsignedIntegerValue;
- (char)charValue;
- (BOOL)isEqualToValue:(id)a0;
- (long long)longLongValue;
- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)integerValue;
- (short)shortValue;
- (void)encodeWithCoder:(id)a0;
- (int)intValue;
- (long long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (id)initWithCoder:(id)a0;

@end
