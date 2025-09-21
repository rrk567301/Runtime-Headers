@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)privateDataEntities;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (Class)userDomainConceptClass;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;

@end
