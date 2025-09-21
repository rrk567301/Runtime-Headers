@interface HDUserDomainConceptAPIObjectManager : NSObject

+ (id)allAPIObjectsFromUserDomainConceptsWithProfile:(id)a0 error:(id *)a1;
+ (id)allUserAnnotatedMedicationsFromUserDomainConceptsWithProfile:(id)a0 predicate:(id)a1 limit:(long long)a2 error:(id *)a3;

@end
