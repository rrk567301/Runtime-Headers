@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSSet *gamepadEventFields;

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)initializeWithModel:(id)a0;

@end
