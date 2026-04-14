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
- (unsigned long long)hash;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
