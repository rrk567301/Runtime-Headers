@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceInputGamepadEventFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) long long extendedIndex;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

- (void)reset;
- (id)init;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)initializeWithModel:(id)a0;

@end
