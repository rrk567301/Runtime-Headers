@class NSString;

@interface HDMedicalUserDomainConceptEntity : HDUserDomainConceptEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (Class)userDomainConceptClass;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)privateSubEntities;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)privateDataEntities;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (BOOL)supportsSyncStore:(id)a0;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;


@end
