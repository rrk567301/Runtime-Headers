@interface CMAVRoutingTimeRangeAsValue : NSValue {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })CMTimeRangeValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
