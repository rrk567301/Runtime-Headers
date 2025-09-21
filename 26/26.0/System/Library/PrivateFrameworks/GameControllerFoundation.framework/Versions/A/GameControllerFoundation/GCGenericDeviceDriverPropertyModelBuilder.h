@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDriverPropertyModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

- (void)reset;
- (id)init;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)initializeWithModel:(id)a0;

@end
