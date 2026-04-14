@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceInputGamepadEventFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) long long extendedIndex;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)initializeWithModel:(id)a0;

@end
