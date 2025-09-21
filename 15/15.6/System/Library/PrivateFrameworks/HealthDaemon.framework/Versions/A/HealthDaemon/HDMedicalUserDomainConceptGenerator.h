@interface HDMedicalUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher

+ (char)generateUserDomainConceptForMedicalRecord:(id)a0 entityPersistentID:(id)a1 insertionContext:(id)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (char)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)a0 profile:(id)a1 ontologyTransaction:(id)a2 error:(id *)a3;
+ (id)propertyCollectionWithOntologyConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (char)remapMedicalRecordsIfNeededForUserDomainConcept:(id)a0 shouldExcludeExistingConcept:(char)a1 profile:(id)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)a0 outAdditionalCodings:(id *)a1 outConceptToRefreshWith:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (char)supportsAutomaticGrouperPromotion;

@end
