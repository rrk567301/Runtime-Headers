@class NSData, NSString, NSArray, CodeIdentity, NSDictionary, AppSandboxEntitlements, ASBMutableContainerSynchronization, NSNumber;

@interface AppSandboxRequest : NSObject {
    CodeIdentity *_codeIdentity;
    AppSandboxEntitlements *_entitlements;
}

@property (retain, nonatomic) NSString *userAccountHomeDirectoryRealPath;
@property (retain, nonatomic) NSString *mainExecutableBundleRealPath;
@property (retain, nonatomic) ASBMutableContainerSynchronization *sync;
@property (retain, nonatomic) NSString *mainBundleIdentifier;
@property (retain, nonatomic) NSDictionary *sandboxProfileValidationInfo;
@property (nonatomic) BOOL saveContainer;
@property (retain, nonatomic) NSData *sandboxProfile;
@property (retain, nonatomic) NSString *containerDataPath;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *quarantineFlags;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) unsigned int userId;
@property (nonatomic) unsigned int groupId;
@property (copy, nonatomic) NSString *userAccountName;
@property (copy, nonatomic) NSString *userAccountHomeDirectoryPath;
@property (copy, nonatomic) NSString *mainExecutableBundlePath;
@property (retain, nonatomic) NSArray *systemProfiles;
@property (retain, nonatomic) NSArray *systemImages;
@property (retain, nonatomic) NSArray *otherImageBundles;
@property (nonatomic) BOOL iOSAppOnMac;
@property (nonatomic) BOOL developerMode;

+ (BOOL)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2 Parameters:(char *)a3;
+ (BOOL)_setFatalError:(id *)a0 withMessage:(id)a1;
+ (id)implicitMacosProfilePaths;
+ (id)implicitIosProfilePaths;
+ (BOOL)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2;
+ (id)appSandboxRequestForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (id)appSandboxRequestForApplicationAtURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithCodeIdentity:(id)a0 entitlements:(id)a1;
- (BOOL)screenSaverRequest;
- (struct container_object_s { } *)_createOrLookupContainerWithIdentifier:(id)a0 shouldMigrate:(BOOL *)a1 error:(id *)a2;
- (BOOL)augmentError:(id *)a0;
- (BOOL)generateSandboxProfileValidationInfo:(id *)a0;
- (BOOL)compileSandboxProfileWithError:(id *)a0;
- (BOOL)_profileTimestampsAreValid;
- (BOOL)containerWithError:(id *)a0;
- (BOOL)appsandboxContainerSync:(id *)a0;
- (BOOL)getSandboxProfileWithError:(id *)a0;
- (void)deriveQuarantineFlags;
- (BOOL)executeRequestWithError:(id *)a0;

@end
