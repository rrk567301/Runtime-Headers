@class NSString;

@interface ICMediaTime : NSObject <NSCopying>

@property (nonatomic) unsigned char days;
@property (nonatomic) unsigned char hours;
@property (nonatomic) unsigned char minutes;
@property (nonatomic) unsigned char seconds;
@property (nonatomic) unsigned char centiseconds;
@property (nonatomic, getter=isNegative) char negative;
@property (readonly, nonatomic) char isZero;
@property (readonly, nonatomic) NSString *durationDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithSeconds:(double)a0;
- (id)initWithSeconds:(double)a0 ignoreFractionalSeconds:(char)a1;
- (char)isEqualToMediaTime:(id)a0;

@end
