@class NSArray, GCControllerLiveInput, GCDeviceHaptics;

@interface GCStylus : GCSpatialAccessory

@property (class, readonly) NSArray *styli;

@property (readonly) GCControllerLiveInput *input;
@property (readonly) GCDeviceHaptics *haptics;

+ (BOOL)isKindOfClass:(Class)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (id)debugDescription;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (Class)superclass;
- (BOOL)conformsToDeviceType:(id)a0;

@end
