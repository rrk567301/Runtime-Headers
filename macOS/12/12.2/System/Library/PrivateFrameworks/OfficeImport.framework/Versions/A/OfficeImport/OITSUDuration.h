@interface OITSUDuration : NSObject <NSCopying> {
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)a0;

@end
