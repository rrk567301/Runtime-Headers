@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDriverPropertyModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
