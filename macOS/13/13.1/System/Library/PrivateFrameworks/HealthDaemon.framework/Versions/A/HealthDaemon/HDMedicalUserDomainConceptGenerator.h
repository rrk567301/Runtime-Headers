@interface HDMedicalUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher

+ (id)propertyCollectionWithOntologyConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (BOOL)supportsAutomaticGrouperPromotion;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)a0 outAdditionalCodings:(id *)a1 outConceptToRefreshWith:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (BOOL)generateUserDomainConceptForMedicalRecord:(id)a0 entityPersistentID:(id)a1 insertionContext:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)remapMedicalRecordsIfNeededForUserDomainConcept:(id)a0 shouldExcludeExistingConcept:(BOOL)a1 ontologyTransaction:(id)a2 error:(id *)a3;

@end
