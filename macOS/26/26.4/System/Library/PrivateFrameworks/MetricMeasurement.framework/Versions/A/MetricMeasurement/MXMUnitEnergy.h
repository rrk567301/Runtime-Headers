@interface MXMUnitEnergy : NSDimension

@property (class, readonly, copy, nonatomic, getter=baseUnit) MXMUnitEnergy *joules;
@property (class, readonly, copy, nonatomic, getter=joules) MXMUnitEnergy *J;
@property (class, readonly, copy, nonatomic) MXMUnitEnergy *nanojoules;
@property (class, readonly, copy, nonatomic, getter=nanojoules) MXMUnitEnergy *nJ;


@end
