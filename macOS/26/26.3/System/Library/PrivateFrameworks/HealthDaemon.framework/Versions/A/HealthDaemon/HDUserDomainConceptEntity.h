@interface HDUserDomainConceptEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)predicateForHasSchedule:(BOOL)a0;
+ (id)ignoreHiddenConceptsPredicate;
+ (Class)userDomainConceptClass;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 syncVersion:(struct { int x0; int x1; })a4 profile:(id)a5 transaction:(id)a6 error:(id *)a7;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)supportsUserAnnotatedMedicationAPIObjectGeneration;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)createAndRefreshOntologyBackedUserDomainConceptWithConceptIdentifier:(id)a0 additionalProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)retrievePrivateDataEntitiesForUserDomainConcept:(id)a0 persistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)privateSubEntities;
+ (id)defaultForeignKey;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (id)userDomainConceptUUIDForCanonicalConceptWithSemanticIdentifierString:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (long long)evaluateIsCanonicalConcept:(id)a0 entityClass:(Class)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
+ (BOOL)storeMethodUpdateUserDomainConcept:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)generateUserAnnotatedMedicationForUserDomainConcept:(id)a0 userAnnotatedMedicationOut:(id *)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)encodesCodableUserDomainConceptSubclassData;
+ (id)propertyForSyncIdentity;
+ (BOOL)incrementSyncAnchorAndAdjustSyncProvenanceIfNotLocalForUserDomainConceptWithUUID:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)supportsHidingSemanticDuplicates;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)privateDataEntities;
+ (BOOL)deleteUserDomainConcept:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updatePrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)cannonicalDoseUnitStringForUserDomainConceptWithUUID:(id)a0 profile:(id)a1 transaction:(id)a2 canonicalDoseUnitStringOut:(id *)a3 error:(id *)a4;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (BOOL)insertPrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updateLinksTargetingUserDomainConceptUUID:(id)a0 toTargetUserDomainConceptUUID:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)generateAPIObjectForUserDomainConcept:(id)a0 apiObjectOut:(id *)a1 transaction:(id)a2 error:(id *)a3;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (BOOL)supportsSyncStore:(id)a0;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
