@class NSDictionary, NSString;

@interface AppSandboxEntitlements : NSObject {
    NSDictionary *_entitlements;
    NSString *_signingIdentifier;
    char _appSandboxOnce;
    char _requestsAppSandbox;
    char _requestsInheritance;
}

+ (id)entitlementsForCodeIdentity:(id)a0 error:(id *)a1;
+ (id)entitlementsForCodeAtURL:(id)a0 error:(id *)a1;
+ (id)entitlementsWithDictionary:(id)a0 forAppWithSigningIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)arrayValueForEntitlement:(id)a0;
- (char)__requestsInheritanceOfSandbox:(id *)a0;
- (id)allEntitlements;
- (id)arrayValueForEntitlement:(id)a0 error:(id *)a1;
- (char)__requestsAppSandbox:(id *)a0;
- (char)boolValueForEntitlement:(id)a0;
- (char)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (char)hasEntitlement:(id)a0 ofType:(Class)a1 value:(id *)a2 error:(id *)a3;
- (char)hasEntitlement:(id)a0 value:(id *)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 forAppWithSigningIdentifier:(id)a1 error:(id *)a2;
- (char)requestsAppSandbox:(id *)a0;
- (char)requestsAppSandboxWithInheritance:(char *)a0 error:(id *)a1;

@end
