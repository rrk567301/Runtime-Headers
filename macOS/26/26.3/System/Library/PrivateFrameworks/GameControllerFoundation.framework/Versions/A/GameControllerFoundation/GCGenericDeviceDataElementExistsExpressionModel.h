@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataElementExistsExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)buildExpressionWithContext:(id)a0 error:(out id *)a1;
- (id)buildReactiveExpressionWithContext:(id)a0 consumer:(id /* block */)a1 error:(out id *)a2;

@end
