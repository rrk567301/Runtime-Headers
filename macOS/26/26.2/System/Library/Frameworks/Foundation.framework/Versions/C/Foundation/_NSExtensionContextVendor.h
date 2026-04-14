@interface _NSExtensionContextVendor : NSObject

+ (void)_startListening;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionDictionary;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening:(BOOL)a0;
+ (Class)_extensionContextClass;

- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)_init;
- (void)_tearDownContextWithUUID:(id)a0;
- (id)_extensionContextForUUID:(id)a0;
- (id)init;

@end
