@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataAddExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (id)description;
+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id /* block */)buildExpressionWithContext:(id)a0 error:(out id *)a1;
- (id)buildReactiveExpressionWithContext:(id)a0 consumer:(id /* block */)a1 error:(out id *)a2;

@end
