@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDriverPropertyModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

- (id)build;
- (unsigned long long)hash;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
