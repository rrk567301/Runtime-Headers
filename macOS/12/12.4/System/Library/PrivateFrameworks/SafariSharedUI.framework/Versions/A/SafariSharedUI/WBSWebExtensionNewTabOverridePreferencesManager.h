@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;
+ (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;

@end
