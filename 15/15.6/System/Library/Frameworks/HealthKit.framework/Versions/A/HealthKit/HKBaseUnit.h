@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {
    NSString *_unitString;
    NSString *_prefix;
    NSString *_root;
    char _uniqued;
}

@property (readonly, nonatomic) double proportionalSize;
@property (readonly, nonatomic) _HKBaseDimension *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)unitFromString:(id)a0;
+ (id)_uniquedRootUnitFromDefinition:(struct { char *x0; char x1; char *x2; double x3; double x4; char x5; })a0;
+ (id)_rootUnitWithDefinition:(struct { char *x0; char x1; char *x2; double x3; double x4; char x5; })a0;
+ (id)_uniquedRootUnit:(id)a0;
+ (id)_uniquedUnitWithPrefix:(id)a0 conversionConstant:(id)a1 rootUnit:(id)a2;
+ (id)_uniquedUnitWithPrefix:(id)a0 rootUnit:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)unitString;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)a0 withCycleSet:(id)a1;
- (id)_initWithUnitString:(id)a0 proportionalSize:(double)a1 scaleOffset:(double)a2;
- (id)_unitByPrefixing:(id)a0 withConversionConstant:(id)a1;

@end
