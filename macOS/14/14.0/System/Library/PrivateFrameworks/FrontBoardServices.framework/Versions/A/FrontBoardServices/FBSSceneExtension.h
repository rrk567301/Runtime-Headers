@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (void)initialize;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (BOOL)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
