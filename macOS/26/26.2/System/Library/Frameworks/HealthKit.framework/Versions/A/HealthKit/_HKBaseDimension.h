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

+ (id)mass;
+ (id)frequency;
+ (id)temperature;
+ (id)angle;
+ (id)prismDiopter;
+ (id)unitLess;
+ (id)conductance;
+ (id)equivalents;
+ (id)soundPressureLevel;
+ (id)nullDimension;
+ (id)pressure;
+ (id)titer;
+ (id)length;
+ (id)time;
+ (id)hearingSensitivity;
+ (id)volume;
+ (id)nonConvertibleIU;
+ (id)energy;
+ (id)changeInTemperature;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)diopter;
+ (id)nonConvertibleMole;
+ (id)electricPotentialDifference;
+ (id)illuminance;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)power;

- (id)_initWithName:(id)a0;
- (id)_baseDimensions;
- (id)dimension;
- (id)unitString;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeReduced;
- (void).cxx_destruct;

@end
