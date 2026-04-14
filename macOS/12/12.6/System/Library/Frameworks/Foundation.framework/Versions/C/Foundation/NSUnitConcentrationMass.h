@interface NSUnitConcentrationMass : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitConcentrationMass *gramsPerLiter;
@property (class, readonly, copy) NSUnitConcentrationMass *milligramsPerDeciliter;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)baseUnit;
+ (id)icuType;
+ (id)millimolesPerLiterWithGramsPerMole:(double)a0;

@end
