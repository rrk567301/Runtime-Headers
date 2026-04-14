@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSSet *gamepadEventFields;

- (id)build;
- (unsigned long long)hash;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
