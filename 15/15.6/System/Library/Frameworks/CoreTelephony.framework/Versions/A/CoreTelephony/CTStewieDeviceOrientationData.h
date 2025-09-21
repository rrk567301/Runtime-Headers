@class NSDate;

@interface CTStewieDeviceOrientationData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) char targetLocked;
@property (nonatomic) char isDeviceStationary;
@property (nonatomic) long long x;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
