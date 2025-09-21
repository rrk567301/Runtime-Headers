@class NSDictionary;

@interface INSystemAppMapper : NSObject {
    struct map<std::string, INSystemApp, std::less<std::string>, std::allocator<std::pair<const std::string, INSystemApp>>> { struct __tree<std::__value_type<std::string, INSystemApp>, std::__map_value_compare<std::string, std::__value_type<std::string, INSystemApp>, std::less<std::string>>, std::allocator<std::__value_type<std::string, INSystemApp>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _mapping;
    NSDictionary *_bundleIdentifierGroupingForIntentExecution;
}

+ (id)supportedIntentsOverridesForBundleIdentifier:(id)a0;

- (id)resolvedAppMatchingExtensionBundleIdentifier:(id)a0;
- (id)matchForBundleIdentifier:(id)a0;
- (id)matchForBundleIdentifier:(id)a0 intentName:(id)a1;
- (id)resolvedIntentMatchingAppBundleIdentifier:(id)a0 preferredCallProvider:(long long)a1 intentClassName:(id)a2;
- (id)init;
- (id)extensionToLaunchableAppBundleIdentifierMapping;
- (id)resolvedIntentForAccessibilityActionWithBundleIdentifier:(id)a0 intentClassName:(id)a1;
- (id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:(id)a0;
- (id).cxx_construct;
- (id)extensionToDisplayableAppBundleIdentifierMapping;
- (id)resolvedIntentMatchingExtensionBundleIdentifier:(id)a0 preferredCallProvider:(long long)a1 intentClassName:(id)a2;
- (void).cxx_destruct;

@end
