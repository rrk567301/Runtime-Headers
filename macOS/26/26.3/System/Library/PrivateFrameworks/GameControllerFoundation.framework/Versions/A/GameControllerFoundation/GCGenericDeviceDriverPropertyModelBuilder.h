@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDriverPropertyModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)initializeWithModel:(id)a0;

@end
