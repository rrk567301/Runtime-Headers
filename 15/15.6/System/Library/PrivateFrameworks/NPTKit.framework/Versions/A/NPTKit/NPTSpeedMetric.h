@class NSDate;

@interface NPTSpeedMetric : NSObject <NSCopying, NSSecureCoding> {
    double privateSpeed;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *pointInTime;
@property (nonatomic) double timeSinceStart;
@property (nonatomic) long long bytesTransferred;
@property (nonatomic) long long totalBytesExpected;
@property (nonatomic) long long responsiveness;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)speed;
- (id)initWithPointInTime:(id)a0 timeSinceStart:(double)a1 bytesTransferred:(long long)a2 totalBytesExpected:(long long)a3;
- (id)initWithPointInTime:(id)a0 timeSinceStart:(double)a1 bytesTransferred:(long long)a2 totalBytesExpected:(long long)a3 speed:(double)a4 responsiveness:(long long)a5;

@end
