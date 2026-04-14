@class GCGenericDeviceDriverPropertiesModel, NSSet, GCGenericDeviceMotionEventDriverModel, GCGenericDeviceRumbleModel, GCGenericDeviceInputEventDriverModel;

@interface GCGenericDeviceDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;
@property (copy, nonatomic) GCGenericDeviceDriverPropertiesModel *properties;
@property (copy, nonatomic) GCGenericDeviceInputEventDriverModel *input;
@property (copy, nonatomic) GCGenericDeviceMotionEventDriverModel *motion;
@property (copy, nonatomic) GCGenericDeviceRumbleModel *rumble;

- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
