@class NSSet, GCControllerLiveInput, GCDeviceHaptics;

@interface GCSpatialAccessory : GCController

@property (class, readonly) NSSet *accessories;

@property (readonly) GCControllerLiveInput *input;
@property (readonly) GCDeviceHaptics *haptics;

+ (BOOL)isKindOfClass:(Class)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (Class)superclass;

- (BOOL)isKindOfClass:(Class)a0;
- (Class)superclass;
- (BOOL)conformsToDeviceType:(id)a0;

@end
