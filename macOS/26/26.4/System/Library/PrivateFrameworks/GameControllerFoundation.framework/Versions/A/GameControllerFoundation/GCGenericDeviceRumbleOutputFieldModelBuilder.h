@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
