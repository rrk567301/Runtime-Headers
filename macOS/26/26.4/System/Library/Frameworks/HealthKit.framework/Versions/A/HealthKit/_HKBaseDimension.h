@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor>

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)time;
+ (id)mass;
+ (id)nonConvertibleIU;
+ (id)soundPressureLevel;
+ (id)pressure;
+ (id)volume;
+ (id)temperature;
+ (id)nonConvertibleMole;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)hearingSensitivity;
+ (id)electricPotentialDifference;
+ (id)nullDimension;
+ (id)frequency;
+ (id)illuminance;
+ (id)energy;
+ (id)length;
+ (id)titer;
+ (id)prismDiopter;
+ (id)unitLess;
+ (id)diopter;
+ (id)changeInTemperature;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)estimatedGlomerularFiltrationRate;
+ (id)conductance;
+ (id)angle;
+ (id)equivalents;
+ (id)power;

- (id)dimension;
- (id)_baseDimensions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithName:(id)a0;
- (id)unitString;
- (BOOL)canBeReduced;

@end
