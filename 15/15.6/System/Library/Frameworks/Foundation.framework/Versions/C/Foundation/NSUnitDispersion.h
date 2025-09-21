@interface NSUnitDispersion : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitDispersion *partsPerMillion;
@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
