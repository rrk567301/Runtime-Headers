@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_extensionMainStoryboard;
+ (void)_startListening;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionDictionary;
+ (Class)_extensionContextClass;
+ (void)_startListening:(BOOL)a0;
+ (id)_sharedExtensionContextVendor;

- (id)init;
- (void)_tearDownContextWithUUID:(id)a0;
- (id)_init;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)_extensionContextForUUID:(id)a0;

@end
