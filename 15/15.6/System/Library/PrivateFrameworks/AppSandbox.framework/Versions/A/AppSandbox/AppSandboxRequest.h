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
@property (nonatomic) char saveContainer;
@property (retain, nonatomic) NSData *sandboxProfile;
@property (retain, nonatomic) NSString *containerDataPath;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *quarantineFlags;
@property (retain, nonatomic) NSArray *extensionTokens;
@property (nonatomic) char requiresMigration;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) unsigned int userId;
@property (nonatomic) unsigned int groupId;
@property (copy, nonatomic) NSString *userAccountName;
@property (copy, nonatomic) NSString *userAccountHomeDirectoryPath;
@property (copy, nonatomic) NSString *mainExecutableBundlePath;
@property (retain, nonatomic) NSArray *systemProfiles;
@property (retain, nonatomic) NSArray *systemImages;
@property (retain, nonatomic) NSArray *otherImages;
@property (nonatomic) char iOSAppOnMac;
@property (nonatomic) char developerMode;

+ (char)_setFatalError:(id *)a0 withMessage:(id)a1;
+ (char)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2;
+ (char)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2 Parameters:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)appSandboxRequestForApplicationAtURL:(id)a0 error:(id *)a1;
+ (id)appSandboxRequestForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (id)implicitIosProfilePaths;
+ (id)implicitMacosProfilePaths;

- (void).cxx_destruct;
- (char)compileSandboxProfileWithError:(id *)a0;
- (void)_createAndPopulateGroupContainerTokens;
- (char)_profileTimestampsAreValid;
- (char)appsandboxContainerSync:(id *)a0;
- (char)augmentError:(id *)a0;
- (char)containerWithError:(id *)a0;
- (void)deriveQuarantineFlags;
- (char)displaySharingConsentPrompt:(id *)a0;
- (char)executeRequestWithError:(id *)a0;
- (char)generateSandboxProfileValidationInfo:(id *)a0;
- (char)getSandboxProfileWithError:(id *)a0;
- (id)initWithCodeIdentity:(id)a0 entitlements:(id)a1;
- (char)screenSaverRequest;

@end
