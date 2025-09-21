@class NSNumber;

@interface CMOdometry : CMLogItem

@property (readonly, nonatomic) BOOL isDOTBiasChangePossible;
@property (readonly, nonatomic) BOOL isMounted;
@property (readonly, nonatomic) BOOL isZUPT;
@property (readonly, nonatomic) NSNumber *deltaPositionX;
@property (readonly, nonatomic) NSNumber *deltaPositionY;
@property (readonly, nonatomic) NSNumber *deltaPositionZ;
@property (readonly, nonatomic) NSNumber *deltaVelocityX;
@property (readonly, nonatomic) NSNumber *deltaVelocityY;
@property (readonly, nonatomic) NSNumber *deltaVelocityZ;
@property (readonly, nonatomic) NSNumber *quaternionX;
@property (readonly, nonatomic) NSNumber *quaternionY;
@property (readonly, nonatomic) NSNumber *quaternionZ;
@property (readonly, nonatomic) NSNumber *quaternionW;
@property (readonly, nonatomic) unsigned long long referenceFrame;
@property (readonly, nonatomic) float rotationArbitraryToTrueNorth;
@property (readonly, nonatomic) long long staticFlag;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDeltaPositionX:(id)a0 deltaPositionY:(id)a1 deltaPositionZ:(id)a2 deltaVelocityX:(id)a3 deltaVelocityY:(id)a4 deltaVelocityZ:(id)a5 quaternionX:(id)a6 quaternionY:(id)a7 quaternionZ:(id)a8 quaternionW:(id)a9 rotationArbitraryToTrueNorth:(float)a10 staticFlag:(long long)a11 isDOTBiasChangePossible:(BOOL)a12 isMounted:(BOOL)a13 isZUPT:(BOOL)a14 timestamp:(double)a15;
- (id)initWithDeltaPositionX:(id)a0 deltaPositionY:(id)a1 deltaPositionZ:(id)a2 deltaVelocityX:(id)a3 deltaVelocityY:(id)a4 deltaVelocityZ:(id)a5 quaternionX:(id)a6 quaternionY:(id)a7 quaternionZ:(id)a8 quaternionW:(id)a9 rotationArbitraryToTrueNorth:(float)a10 staticFlag:(long long)a11 timestamp:(double)a12;
- (id)initWithDeltaPositionX:(id)a0 deltaPositionY:(id)a1 deltaPositionZ:(id)a2 deltaVelocityX:(id)a3 deltaVelocityY:(id)a4 deltaVelocityZ:(id)a5 quaternionX:(id)a6 quaternionY:(id)a7 quaternionZ:(id)a8 quaternionW:(id)a9 timestamp:(double)a10;
- (void)rotateArbitraryToTrueNorth;

@end
