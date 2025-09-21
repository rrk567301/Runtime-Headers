@interface NSUnitIlluminance : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitIlluminance *lux;
@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
