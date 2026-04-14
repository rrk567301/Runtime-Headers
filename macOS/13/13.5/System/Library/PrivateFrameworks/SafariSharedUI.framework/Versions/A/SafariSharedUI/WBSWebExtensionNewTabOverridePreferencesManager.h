@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (void)setNewWindowBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;
+ (void)clearNewWindowBehaviorInDefaults:(id)a0;
+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (id)extensionComposedIdentifierForNewWindowPreferenceInDefaults:(id)a0;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (BOOL)isNewWindowPageOverriddenByAnEnabledExtension;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (id)cloudExtensionStateForDefaults:(id)a0;
+ (id)_webExtensionOverridingNewTabPageWithDefaults:(id)a0;
+ (id)_webExtensionOverridingNewWindowPage;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;

@end
