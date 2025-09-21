@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (id)description;
+ (void)initialize;
+ (char)propagateToSceneWithDefinition:(id)a0;
+ (id)_frameworkNameLoadingIfNeeded:(char)a0;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (char)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
