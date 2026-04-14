@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
