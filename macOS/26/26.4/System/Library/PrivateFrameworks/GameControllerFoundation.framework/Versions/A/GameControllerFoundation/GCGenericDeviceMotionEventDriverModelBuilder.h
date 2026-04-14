@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceMotionEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerZExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroZExpression;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
