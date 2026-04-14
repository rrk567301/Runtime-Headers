@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_extensionMainStoryboard;
+ (id)_sharedExtensionContextVendor;
+ (Class)_extensionPrincipalClass;
+ (void)_startListening:(BOOL)a0;
+ (void)_startListening;
+ (id)_extensionDictionary;
+ (Class)_extensionContextClass;

- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_tearDownContextWithUUID:(id)a0;
- (id)_init;
- (id)_extensionContextForUUID:(id)a0;
- (id)init;

@end
