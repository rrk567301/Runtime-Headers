@interface NSUnitSpeed : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) char supportsRegionalPreference;
@property (class, readonly, copy) NSUnitSpeed *metersPerSecond;
@property (class, readonly, copy) NSUnitSpeed *kilometersPerHour;
@property (class, readonly, copy) NSUnitSpeed *milesPerHour;
@property (class, readonly, copy) NSUnitSpeed *knots;
@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
