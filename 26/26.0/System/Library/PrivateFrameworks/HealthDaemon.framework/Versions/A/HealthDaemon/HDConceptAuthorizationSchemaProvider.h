@class NSString;

@interface HDConceptAuthorizationSchemaProvider : NSObject <HDAuthorizationSchemaProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allUserDomainConceptsThatSupportUserAnnotatedMedicationDerivation:(id)a0 transaction:(id)a1 errorOut:(id *)a2;
+ (BOOL)_createRecordsAndInsertByLookingUpUDCs:(id)a0 sourceUUID:(id)a1 profile:(id)a2 transaction:(id)a3 errorOut:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)isClientAuthorizedToWriteType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToWriteObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToReadObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToReadType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (id)filterForClientUserAnnotatedMedications:(id)a0 bundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (id)filteredAuthorizedObjectsForClient:(id)a0 anchor:(id)a1 bundleIdentifier:(id)a2 clientEntitlements:(id)a3 profile:(id)a4 error:(id *)a5;
- (BOOL)setObjectAuthorizationStatusContext:(id)a0 forObjectType:(id)a1 bundleIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;

@end
