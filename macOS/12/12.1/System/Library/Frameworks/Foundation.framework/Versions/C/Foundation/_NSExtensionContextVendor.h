@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_startListening;
+ (void)_startListening:(BOOL)a0;
+ (id)_extensionDictionary;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionContextClass;
+ (id)_sharedExtensionContextVendor;

- (id)init;
- (id)_init;
- (void)_tearDownContextWithUUID:(id)a0;
- (id)_extensionContextForUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;

@end
