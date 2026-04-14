@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSSet *gamepadEventFields;

- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
