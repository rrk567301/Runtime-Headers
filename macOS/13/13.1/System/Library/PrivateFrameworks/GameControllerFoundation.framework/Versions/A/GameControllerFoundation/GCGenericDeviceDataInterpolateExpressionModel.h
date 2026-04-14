@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataInterpolateExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
