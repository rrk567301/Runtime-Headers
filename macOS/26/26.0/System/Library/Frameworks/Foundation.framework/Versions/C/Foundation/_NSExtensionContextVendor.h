@interface _NSExtensionContextVendor : NSObject

+ (id)_extensionDictionary;
+ (id)_extensionMainStoryboard;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;
+ (Class)_extensionContextClass;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)_extensionPrincipalClass;
+ (void)_startListening:(BOOL)a0;

- (id)_init;
- (id)_extensionContextForUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)init;
- (void)_tearDownContextWithUUID:(id)a0;

@end
