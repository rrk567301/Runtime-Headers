@interface LNConnectionPolicy : NSObject

+ (id)policyWithActionMetadata:(id)a0;
+ (id)policyWithEntityMetadata:(id)a0;
+ (id)policyWithEntityQueryMetadata:(id)a0;
+ (id)policyWithBundleIdentifier:(id)a0;
+ (id)policyWithActionMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (id)policyWithEntityMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (id)policyWithQueryMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (BOOL)shouldExecuteActionOnApplicationWithBundleIdentifier:(id)a0;

@end
