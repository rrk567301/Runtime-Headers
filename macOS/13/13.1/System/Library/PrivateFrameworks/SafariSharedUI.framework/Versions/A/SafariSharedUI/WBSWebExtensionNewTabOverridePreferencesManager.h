@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (id)extensionComposedIdentifierForNewWindowPreferenceInDefaults:(id)a0;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (BOOL)isNewWindowPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;
+ (void)clearNewWindowBehaviorInDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (void)setNewWindowBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;
+ (id)cloudExtensionStateForDefaults:(id)a0;

@end
