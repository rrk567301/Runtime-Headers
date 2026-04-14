@class NSNumber, NSSet;

@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSNumber *gamepadLeftThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSNumber *gamepadRightThumbstickDeadzoneRadius;
@property (copy, nonatomic) NSSet *gamepadEventFields;
@property (copy, nonatomic) NSSet *keyboardEventFields;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
