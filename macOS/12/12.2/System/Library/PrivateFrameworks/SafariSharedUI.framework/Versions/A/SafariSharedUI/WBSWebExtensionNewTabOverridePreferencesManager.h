@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;

@end
