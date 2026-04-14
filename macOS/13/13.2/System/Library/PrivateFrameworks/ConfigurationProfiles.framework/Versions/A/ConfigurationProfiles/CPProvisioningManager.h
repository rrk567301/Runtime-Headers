@interface CPProvisioningManager : NSObject

+ (id)sharedProvisioningManager;
+ (id)sharedProvisioningManager:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (void)postNotification;
- (BOOL)profilesAreInstalled;
- (id)allProvisioningDictionaries:(id *)a0;
- (id)allProvisioningDictionariesWithFilter:(id)a0 error:(id *)a1;
- (id)provisioningDictionariesForApplicationIdentifier:(id)a0 error:(id *)a1;
- (id)provisioningDictionaryForApplicationIdentifier:(id)a0 andUUID:(id)a1 error:(id *)a2;
- (id)provisioningDictionaryForUUID:(id)a0 error:(id *)a1;
- (id)combinedProvisioningDictionaryFromData:(id)a0 withUserData:(id)a1 error:(id *)a2;
- (id)installProvisioningProfile:(id)a0 withUserData:(id)a1;
- (id)installProvisioningProfile:(id)a0;
- (id)installCombinedProvisioningDictionary:(id)a0;
- (id)validateAndCopyProfileFromData:(id)a0 error:(id *)a1;
- (id)uninstallProvisioningProfiles:(id)a0;
- (id)uninstallProvisioningProfileByApplicationIdentifier:(id)a0 andUUID:(id)a1;
- (id)uninstallProvisioningProfileByUUID:(id)a0;
- (id)removeAllProvisioningProfiles;
- (id)removeProvisioningStore;

@end
