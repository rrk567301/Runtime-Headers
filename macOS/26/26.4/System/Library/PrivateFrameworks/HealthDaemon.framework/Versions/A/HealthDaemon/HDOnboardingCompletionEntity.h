@interface HDOnboardingCompletionEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)insertOnboardingCompletion:(id)a0 syncIdentity:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAllCompletionsForFeatureIdentifier:(id)a0 syncIdentity:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;

- (id)onboardingCompletionWithTransaction:(id)a0 error:(id *)a1;

@end
