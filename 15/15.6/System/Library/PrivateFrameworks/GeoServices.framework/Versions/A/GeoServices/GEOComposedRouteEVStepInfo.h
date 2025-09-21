@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int remainingBatteryCharge;
@property (readonly, nonatomic) unsigned int remainingBatteryPercentage;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEVStateInfo:(id)a0;

@end
