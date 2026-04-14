@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataInputElementValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic) long long scaleType;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *fallbackExpression;

+ (Class)modelClass;

- (id)build;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
