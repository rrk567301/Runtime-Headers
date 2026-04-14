@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataElementExistsExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression;

+ (Class)modelClass;

- (id)build;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
