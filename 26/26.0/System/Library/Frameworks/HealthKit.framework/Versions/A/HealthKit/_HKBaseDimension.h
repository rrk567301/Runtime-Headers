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

+ (id)temperature;
+ (id)energy;
+ (id)diopter;
+ (id)equivalents;
+ (id)pressure;
+ (id)frequency;
+ (id)soundPressureLevel;
+ (id)nullDimension;
+ (id)unitLess;
+ (id)nonConvertibleIU;
+ (id)nonConvertibleMole;
+ (id)angle;
+ (id)time;
+ (id)illuminance;
+ (id)volume;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)electricPotentialDifference;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)titer;
+ (id)length;
+ (id)mass;
+ (id)conductance;
+ (id)prismDiopter;
+ (id)hearingSensitivity;
+ (id)power;
+ (id)changeInTemperature;

- (id)unitString;
- (id)dimension;
- (id)_baseDimensions;
- (BOOL)canBeReduced;
- (id)_initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
