@interface FBSSceneExtension : NSObject

+ (void)initialize;
+ (id)description;
+ (id)alloc;
+ (BOOL)propagateToSceneWithDefinition:(id)a0;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (id)_frameworkNameLoadingIfNeeded:(BOOL)a0;
+ (BOOL)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
