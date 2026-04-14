@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceMotionEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerZExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroZExpression;

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)initializeWithModel:(id)a0;

@end
