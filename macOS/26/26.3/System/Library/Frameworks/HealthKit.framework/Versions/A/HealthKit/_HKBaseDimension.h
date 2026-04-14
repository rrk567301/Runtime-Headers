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

+ (id)power;
+ (id)mass;
+ (id)length;
+ (id)soundPressureLevel;
+ (id)volume;
+ (id)time;
+ (id)changeInTemperature;
+ (id)nonConvertibleIU;
+ (id)temperature;
+ (id)_uniquedDefinedDimensionWithName:(id)a0;
+ (id)conductance;
+ (id)electricPotentialDifference;
+ (id)illuminance;
+ (id)hearingSensitivity;
+ (id)unitLess;
+ (id)equivalents;
+ (id)angle;
+ (id)nonConvertibleMole;
+ (id)titer;
+ (id)_uniquedDimensionWithName:(id)a0 configuration:(id /* block */)a1;
+ (id)prismDiopter;
+ (id)frequency;
+ (id)energy;
+ (id)pressure;
+ (id)diopter;
+ (id)nullDimension;

- (id)_initWithName:(id)a0;
- (id)dimension;
- (id)unitString;
- (id)_baseDimensions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeReduced;

@end
