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

+ (id)length;
+ (id)volume;
+ (id)time;
+ (id)pressure;
+ (id)mass;
+ (id)power;
+ (id)angle;
+ (id)temperature;
+ (id)frequency;
+ (id)energy;
+ (id)changeInTemperature;
+ (id)conductance;
+ (id)nonConvertibleMole;
+ (id)nonConvertibleIU;
+ (id)equivalents;
+ (id)hearingSensitivity;
+ (id)soundPressureLevel;
+ (id)titer;
+ (id)electricPotentialDifference;
+ (id)diopter;
+ (id)prismDiopter;
+ (id)nullDimension;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithName:(id)a0;
- (id)dimension;
- (id)unitString;
- (id)_baseDimensions;
- (BOOL)canBeReduced;

@end
