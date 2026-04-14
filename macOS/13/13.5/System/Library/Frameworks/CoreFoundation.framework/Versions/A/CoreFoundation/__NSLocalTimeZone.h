@interface __NSLocalTimeZone : NSTimeZone

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)name;
- (id)abbreviationForDate:(id)a0;
- (Class)classForCoder;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;

@end
