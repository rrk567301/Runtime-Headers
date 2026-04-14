@interface DynamicCodeIdentity : CodeIdentity {
    struct { unsigned int val[8]; } _token;
}

+ (id)currentApplication;
+ (id)signingRoot;
+ (id)dynamicCodeIdentityForProcessIdentifier:(int)a0;
+ (id)dynamicCodeIdentityForProcessIdentifier:(int)a0 error:(id *)a1;
+ (id)dynamicCodeIdentityForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)dynamicCodeIdentityForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;

- (id)description;
- (BOOL)isAppSandboxed;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0;
- (BOOL)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (id)guestWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)guestWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
- (id)staticCodeIdentity;
- (BOOL)iOSPlatform;

@end
