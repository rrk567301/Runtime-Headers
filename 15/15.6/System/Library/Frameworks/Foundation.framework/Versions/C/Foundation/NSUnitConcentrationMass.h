@interface NSUnitConcentrationMass : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) char supportsRegionalPreference;
@property (class, readonly, copy) NSUnitConcentrationMass *gramsPerLiter;
@property (class, readonly, copy) NSUnitConcentrationMass *milligramsPerDeciliter;
@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)millimolesPerLiterWithGramsPerMole:(double)a0;

@end
