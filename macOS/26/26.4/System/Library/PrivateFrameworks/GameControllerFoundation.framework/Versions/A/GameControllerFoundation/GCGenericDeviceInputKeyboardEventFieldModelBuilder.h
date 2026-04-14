@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceInputKeyboardEventFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) unsigned int usage;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
