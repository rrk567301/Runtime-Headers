@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (void)initialize;
+ (id)description;
+ (BOOL)propagateToSceneWithDefinition:(id)a0;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (id)_frameworkNameLoadingIfNeeded:(BOOL)a0;
+ (BOOL)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
