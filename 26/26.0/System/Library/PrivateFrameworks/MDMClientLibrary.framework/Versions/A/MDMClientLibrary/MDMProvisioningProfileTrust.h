@class NSObject;
@protocol OS_dispatch_queue;

@interface MDMProvisioningProfileTrust : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *misVerificationQueue;
@property (nonatomic) BOOL isUnenrollingFromMDM;

+ (void)didSuperviseThroughConfigurator;
+ (void)untrustProvisioningProfileUUID:(id)a0;
+ (id)_appSignerIdentitiesFromBundleIDs:(id)a0;
+ (id)_developer:(id)a0 withoutPrefix:(id)a1;
+ (id)allTrustedSignerIdentities;
+ (BOOL)anyUPPExistsForManagedAppSigners;
+ (id)appSignerIdentityForBundleID:(id)a0;
+ (id)developerFromIdentity:(id)a0 hasFreePP:(BOOL)a1 hasUPP:(BOOL)a2;
+ (void)didSuperviseThroughADE;
+ (BOOL)enumerateProvisioningProfilesWithBlock:(id /* block */)a0;
+ (BOOL)isTrustedProvisioningProfileUUID:(id)a0;
+ (id)managedAppSigners;
+ (BOOL)manualTrustSignerIdentities:(id)a0;
+ (id)provisioningProfileUUIDsForSignerIdentity:(id)a0;
+ (id)signerIdentitiesFromProvisioningProfileUUID:(id)a0;

- (void).cxx_destruct;
- (void)didEnrollInMDMWithPasscode:(id)a0 duringMigration:(BOOL)a1;
- (void)didUnenrollFromMDM;
- (id)initWithValidationQueue:(id)a0;
- (void)uiTrustAndVerifyProvisioningProfiles:(id)a0 developer:(id)a1 completion:(id /* block */)a2;
- (void)uiVerifyProvisioningProfileUUID:(id)a0 completion:(id /* block */)a1;
- (void)untrustSignerIdentities:(id)a0;
- (void)updateTrustedCodeSigningIdentities:(id)a0 validateBundleIDs:(id)a1 validateManagedApps:(BOOL)a2;

@end
