@class CLLocation, NSDate;

@interface CLLocationExtendedTimestamps : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDate *systemTimeNotUserTime;
@property (nonatomic) double machContinuousTimeSec;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCLLocation:(id)a0 systemTime:(id)a1 machContinuousTimeSec:(double)a2;

@end
