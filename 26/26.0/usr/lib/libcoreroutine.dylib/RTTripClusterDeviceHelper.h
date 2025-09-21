@interface RTTripClusterDeviceHelper : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL currentDeviceOnly;

+ (id)alloc;
+ (id)currentDevicePredicateWithPropertyName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)getDeviceHelperInstance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)initWithDefaultsManager:(id)a0 platform:(id)a1;

@end
