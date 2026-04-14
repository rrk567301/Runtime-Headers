@interface GCGenericDeviceDataConstantExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) double value;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end
