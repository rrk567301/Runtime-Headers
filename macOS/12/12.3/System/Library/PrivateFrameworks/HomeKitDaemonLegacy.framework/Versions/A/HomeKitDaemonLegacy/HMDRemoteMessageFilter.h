@interface HMDRemoteMessageFilter : HMFMessageFilter

+ (BOOL)canInitWithMessage:(id)a0;
+ (id)policyClasses;

- (BOOL)acceptWithPolicies:(id)a0 error:(id *)a1;

@end
