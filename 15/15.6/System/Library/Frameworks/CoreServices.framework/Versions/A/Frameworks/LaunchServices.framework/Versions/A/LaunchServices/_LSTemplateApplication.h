@class NSUUID, NSString, NSURL, NSArray, NSDictionary;

@interface _LSTemplateApplication : NSObject <NSSecureCoding> {
    BOOL _auditTokenValid;
    struct { unsigned int val[8]; } _creatorAuditToken;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) const struct { unsigned int x0[8]; } *creatorAuditTokenP;
@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSUUID *applicationUUID;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *proxyHostBundleIdentifier;
@property (copy) NSString *displayName;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *additionalInfoPListKeys;
@property (readonly, copy) NSString *creatorTeamIdentifier;
@property (readonly, copy) NSDictionary *creatorInfoPList;
@property (readonly, copy) NSDictionary *creatorEntitlements;

+ (id)dataVaultURL:(char)a0 error:(id *)a1;
+ (id)frameworkVersionForDataVaultVersion;
+ (id)hashesV1InDataVaultURL:(char)a0 error:(id *)a1;
+ (id)itemPathInDataVault:(id)a0;
+ (id)newWithTemplateApplicationUUID:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)newWithURL:(id)a0 displayName:(id)a1 bundleIDPrefix:(id)a2 proxyHostBundleIdentifier:(id)a3 infoPListKeys:(id)a4 arguments:(id)a5 options:(id)a6 creatorAuditToken:(const struct { unsigned int x0[8]; } *)a7 error:(id *)a8;
+ (id)newWithURL:(id)a0 options:(id)a1 auditToken:(const struct { unsigned int x0[8]; } *)a2 error:(id *)a3;
+ (id)readFromDataVault:(id)a0 error:(id *)a1;
+ (id)templateApplicationFileURLInDataVault:(id)a0 error:(id *)a1;
+ (char)validateSignatureInDatabaseForTemplateApplication:(id)a0 options:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)finalize:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 options:(id)a1 auditToken:(const struct { unsigned int x0[8]; } *)a2;
- (char)computeSignature:(id)a0 withBlock:(id /* block */)a1;
- (char)create:(id)a0 error:(id *)a1;
- (const struct { unsigned int x0[8]; } *)creatorAuditTokenP;
- (char)getUniqueCodeSignature:(id)a0 hash:(id *)a1 error:(id *)a2;
- (id)infoForDataVault:(id)a0;
- (id)infoPList:(id *)a0;
- (id)infoPListURL;
- (id)itemPathInDataVault;
- (char)markAsImmutable:(char)a0 options:(id)a1 error:(id *)a2;
- (id)readFromDataVault:(id *)a0;
- (char)signTemplateAppBundle:(id)a0 cdHash:(id *)a1 error:(id *)a2;
- (id)templateApplicationFileURLInDataVaultWithError:(id *)a0;
- (char)update:(id)a0 error:(id *)a1;
- (char)validateTemplateApplicationBundle:(id)a0 error:(id *)a1;
- (char)writeInfoPList:(id)a0 error:(id *)a1;
- (char)writeToDataVault:(id)a0 error:(id *)a1;

@end
