@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_startListening:(BOOL)a0;
+ (void)_startListening;
+ (id)_sharedExtensionContextVendor;
+ (id)_extensionMainStoryboard;
+ (id)_extensionDictionary;
+ (Class)_extensionPrincipalClass;
+ (Class)_extensionContextClass;

- (id)_init;
- (id)_extensionContextForUUID:(id)a0;
- (void)_tearDownContextWithUUID:(id)a0;
- (id)init;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;

@end
