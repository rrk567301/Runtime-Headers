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

+ (id)equivalents;
+ (id)mass;
+ (id)hearingSensitivity;
+ (id)energy;
+ (id)diopter;
+ (id)time;
+ (id)soundPressureLevel;
+ (id)nullDimension;
+ (id)titer;
+ (id)conductance;
+ (id)pressure;
+ (id)prismDiopter;
+ (id)illuminance;
+ (id)temperature;
+ (id)frequency;
+ (id)length;
+ (id)unitLess;
+ (id)volume;
+ (id)nonConvertibleIU;
+ (id)electricPotentialDifference;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)nonConvertibleMole;
+ (id)changeInTemperature;
+ (id)angle;
+ (id)power;

- (id)dimension;
- (id)_initWithName:(id)a0;
- (id)_baseDimensions;
- (id)unitString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeReduced;

@end
