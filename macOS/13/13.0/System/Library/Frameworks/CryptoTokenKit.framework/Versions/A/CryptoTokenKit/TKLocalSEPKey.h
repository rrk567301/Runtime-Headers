@class NSString, NSXPCConnection;

@interface TKLocalSEPKey : TKSEPKey {
    NSString *_callerName;
}

@property (retain, nonatomic) id sac;
@property (readonly, nonatomic) NSString *callerName;
@property (readonly, nonatomic) NSXPCConnection *caller;

+ (BOOL)hasSEP;
+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (void)setupKeybagForTesting:(BOOL)a0;
+ (id)_testing_callerEntitlements;
+ (void)set_testing_callerEntitlements:(id)a0;
+ (void)setContextErrorHandler:(id /* block */)a0;
+ (int)_eosDeviceType;
+ (int)keybagHandle;
+ (id)protectionForKeyClass:(int)a0;
+ (int)keyClassForProtection:(id)a0;

- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (struct __SecAccessControl { } *)accessControl;
- (BOOL)systemKey;
- (id)encodedAccessGroups;
- (id)parametersWithACMHandle:(id)a0;
- (BOOL)evaluateRequirementIgnoringAccessGroups:(struct __ACMRequirement { } *)a0;
- (BOOL)error:(id *)a0 withAKSReturn:(int)a1 ACMHandle:(id)a2 AKSOperation:(id)a3 message:(id)a4;
- (id)authContextWithError:(id *)a0;
- (id)_initWithAuthContext:(id)a0 caller:(id)a1;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 error:(id *)a3;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 error:(id *)a6;
- (BOOL)callerHasEntitlement:(id)a0 error:(id *)a1;

@end
