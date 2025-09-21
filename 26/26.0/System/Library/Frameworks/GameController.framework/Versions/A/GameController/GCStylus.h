@class NSArray, GCControllerLiveInput, GCDeviceHaptics;

@interface GCStylus : GCSpatialAccessory

@property (class, readonly) NSArray *styli;

@property (readonly) GCControllerLiveInput *input;
@property (readonly) GCDeviceHaptics *haptics;

+ (BOOL)isKindOfClass:(Class)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (id)debugDescription;
- (BOOL)isKindOfClass:(Class)a0;
- (id)description;
- (Class)superclass;
- (BOOL)conformsToDeviceType:(id)a0;

@end
