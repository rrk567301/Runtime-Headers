@interface SOUtils : NSObject

+ (BOOL)isInternalBuild;
+ (id)bundleIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (int)mmapFile:(id)a0 mode:(long long)a1 mmapData:(id *)a2;
+ (id)currentProcessName;
+ (id)currentProcessContainerPath;
+ (id)signatureSetToString:(long long)a0;
+ (BOOL)checkSignatureOfFile:(id)a0 teamIdentifier:(id *)a1 trusted:(BOOL *)a2 signedBySet:(long long *)a3 certificates:(id *)a4 error:(id *)a5;
+ (id)processNameForPID:(int)a0;
+ (BOOL)currentProcessIsSandboxed;
+ (id)teamIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)currentProcessInSystemSession;
+ (id)mapArray:(id)a0 usingBlock:(id /* block */)a1;
+ (int)currentUID;
+ (BOOL)isAppSSOServiceAvailable;
+ (BOOL)checkEntitlementFromXPC:(id)a0 entitlement:(id)a1;
+ (BOOL)sandboxAllowsXPC:(const char *)a0;
+ (BOOL)auditTokenFromData:(id)a0 auditToken:(struct { unsigned int x0[8]; } *)a1;
+ (void)unmapFile:(int)a0 data:(id)a1;
+ (void)enterSandbox:(const char *)a0 sandboxProfileName:(const char *)a1;
+ (int)pidFromAuditToken:(struct { unsigned int x0[8]; })a0;

@end
