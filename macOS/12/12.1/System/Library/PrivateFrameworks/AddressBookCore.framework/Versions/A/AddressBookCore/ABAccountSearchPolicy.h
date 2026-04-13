@interface ABAccountSearchPolicy : NSObject

+ (id)neverSearchablePolicy;
+ (id)alwaysSearchablePolicyWithSearchOperationClass:(Class)a0;
+ (id)dynamicSearchPolicyWithAccountConfiguration:(id)a0 searchOperationClass:(Class)a1;

@end
