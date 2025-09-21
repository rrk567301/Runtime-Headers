@interface NSUnitElectricPotentialDifference : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitElectricPotentialDifference *megavolts;
@property (class, readonly, copy) NSUnitElectricPotentialDifference *kilovolts;
@property (class, readonly, copy) NSUnitElectricPotentialDifference *volts;
@property (class, readonly, copy) NSUnitElectricPotentialDifference *millivolts;
@property (class, readonly, copy) NSUnitElectricPotentialDifference *microvolts;
@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;
+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
