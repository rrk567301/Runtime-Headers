@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDriverPropertyModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
