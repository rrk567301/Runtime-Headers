@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

- (void)reset;
- (id)init;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)initializeWithModel:(id)a0;

@end
