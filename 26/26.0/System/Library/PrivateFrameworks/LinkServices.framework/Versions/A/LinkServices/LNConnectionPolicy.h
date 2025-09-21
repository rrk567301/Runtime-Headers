@interface LNConnectionPolicy : NSObject

+ (id)policyWithActionMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithActionMetadata:(id)a0;
+ (id)policyWithBundleIdentifier:(id)a0;
+ (id)policyWithEntityMetadata:(id)a0;
+ (id)policyWithEntityQueryMetadata:(id)a0;
+ (BOOL)_typeExistsWithMangledTypeName:(id)a0;
+ (id)policyWithEnumMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithActionMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2 processInstanceIdentifier:(id)a3;
+ (id)policyWithEntityMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2 processInstanceIdentifier:(id)a3;
+ (id)policyWithEntityMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithEntityQueryMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithEnumMetadata:(id)a0;
+ (id)policyWithEnumMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2 processInstanceIdentifier:(id)a3;
+ (id)policyWithQueryMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2 processInstanceIdentifier:(id)a3;
+ (void)resolveEffectiveBundleIdentifiers:(id)a0 withAllowedTargets:(id)a1 appBundleIdentifier:(id *)a2 extensionBundleIdentifier:(id *)a3 daemonBundleIdentifier:(id *)a4 frameworkBundleIdentifier:(id *)a5 signals:(id)a6;
+ (BOOL)shouldExecuteActionOnApplicationWithActionMetadata:(id)a0 signals:(id)a1 reason:(id *)a2;
+ (BOOL)shouldExecuteActionOnApplicationWithBundleIdentifier:(id)a0 allowSuspended:(BOOL)a1;
+ (BOOL)shouldHandleInProcessWithMangledTypeName:(id)a0 bundleIdentifier:(id)a1;

@end
