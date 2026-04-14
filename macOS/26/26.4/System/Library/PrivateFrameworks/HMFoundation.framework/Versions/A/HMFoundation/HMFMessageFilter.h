@class NSString, NSArray;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (long long)filterMessage:(id)a0 withPolicies:(id)a1 error:(id *)a2;
+ (long long)filterMessage:(id)a0 withPolicies:(id)a1 dispatcher:(id)a2 error:(id *)a3;
+ (id)policyOfClass:(Class)a0 fromPolicies:(id)a1;
+ (id)requiredPolicyOfClass:(Class)a0 fromPolicies:(id)a1 error:(id *)a2;


@end
