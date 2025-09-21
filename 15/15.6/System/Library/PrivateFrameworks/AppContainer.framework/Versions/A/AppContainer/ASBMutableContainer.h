@class NSRegularExpression, NSDictionary, NSURL, CodeIdentity, NSString;

@interface ASBMutableContainer : ASBContainer {
    char _created;
    NSDictionary *varMap;
    NSRegularExpression *matchVars;
    char _pathSpecOnce;
    NSString *_backupPath;
}

@property (readonly) NSURL *backupURL;
@property (readonly) CodeIdentity *ownerCode;
@property (readonly) NSURL *migrationManifestURL;

+ (id)containerForApplicationAtURL:(id)a0 error:(id *)a1;
+ (id)containerForApplicationAtURL:(id)a0 withHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerForApplicationAtURL:(id)a0 withHomeDirectory:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)containerForCodeIdentity:(id)a0 mcmContainer:(struct container_object_s { } *)a1 HomeDirectory:(id)a2 error:(id *)a3;
+ (id)containerForCodeIdentity:(id)a0 withHomeDirectory:(id)a1 error:(id *)a2;
+ (id)containerForCodeIdentity:(id)a0 withHomeDirectory:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)_applyDataAccessPolicy:(id)a0 toDescriptor:(int)a1;
- (void)_applyDefaultSameTeamExceptionToDescriptor:(int)a0;
- (void)_applyPrivacyProtectionExceptionPolicy:(int)a0;
- (void)_registerExceptionToContainerAtFileDescriptor:(int)a0 forAllAppsFromTeam:(id)a1;
- (void)_registerExceptionToContainerAtFileDescriptor:(int)a0 forAllInstallPackagesFromTeam:(id)a1;
- (void)_registerExceptionToContainerAtFileDescriptor:(int)a0 forApp:(id)a1 fromTeam:(id)a2;
- (char)backupFile:(id)a0 usingFileManager:(id)a1 error:(id *)a2;
- (char)disablePrivacyProtectionsWithError:(id *)a0;
- (char)enablePrivacyProtectionsWithError:(id *)a0;
- (id)evaluatePathSpecification:(id)a0 usingFileManager:(id)a1 error:(id *)a2;
- (id)initWithApplicationAtURL:(id)a0 andHomeDirectory:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithCodeIdentity:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
- (id)initWithCodeIdentity:(id)a0 andHomeDirectory:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithCodeIdentity:(id)a0 mcmContainer:(struct container_object_s { } *)a1 HomeDirectory:(id)a2 error:(id *)a3;
- (id)initWithFakeContainerForCodeIdentity:(id)a0 andHomeDirectory:(id)a1 error:(id *)a2;
- (id)initWithHomeDirectory:(id)a0 andContainerPath:(id)a1 codeIdentity:(id)a2 error:(id *)a3;
- (id)initWithHomeDirectory:(id)a0 andContainerPath:(id)a1 error:(id *)a2;
- (char)migrateAndIgnoreActionFailures:(char)a0 error:(id *)a1;
- (char)migrateDataAndIgnoreActionFailures:(char)a0 error:(id *)a1;
- (char)preferenceDomain:(id)a0 requiresMigration:(char *)a1 error:(id *)a2;
- (void)setRequirementACL:(id)a0;
- (void)setSandboxProfileData:(id)a0;
- (void)setSandboxProfileDataValidationInfo:(id)a0;

@end
