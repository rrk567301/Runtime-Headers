@class ULMapPoint;

@interface ULMapTrajectoryPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ULMapPoint *mapPoint;
@property (nonatomic) float forwardAzimuthDegrees;
@property (nonatomic) float forwardElevationDegrees;
@property (nonatomic) float backwardAzimuthDegrees;
@property (nonatomic) float backwardElevationDegrees;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMapPoint:(id)a0 forwardAzimuth:(float)a1 forwardElevation:(float)a2 backwardAzimuth:(float)a3 backwardElevation:(float)a4;

@end
