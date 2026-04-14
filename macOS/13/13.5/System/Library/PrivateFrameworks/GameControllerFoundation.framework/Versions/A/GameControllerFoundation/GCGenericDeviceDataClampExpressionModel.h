@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataClampExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *minExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maxExpression;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end
