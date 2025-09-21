@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataBitTestExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (readonly) BOOL partialMatch;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id /* block */)buildExpressionWithContext:(id)a0 error:(out id *)a1;
- (id)buildReactiveExpressionWithContext:(id)a0 consumer:(id /* block */)a1 error:(out id *)a2;

@end
