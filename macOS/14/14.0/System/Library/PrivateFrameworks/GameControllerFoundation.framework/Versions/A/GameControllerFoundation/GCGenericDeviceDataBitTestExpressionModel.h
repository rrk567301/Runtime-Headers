@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataBitTestExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (readonly) BOOL partialMatch;

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
