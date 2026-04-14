@interface ABSearchElementMemberOfGroupPredicates : NSObject

+ (id)predicateForMemberOfSmartGroup:(id)a0 comparison:(long long)a1 helper:(id /* block */)a2;
+ (id)predicateForMemberOfDumbGroup:(id)a0 comparison:(long long)a1;
+ (id)predicateForMemberOfAnyGroupWithComparison:(long long)a0 helper:(id /* block */)a1;
+ (id)predicateByAddingVisibilityClauseToPredicate:(id)a0;
+ (id)predicateForMemberOfDumbGroup:(id)a0;
+ (id)predicateForNotMemberOfDumbGroup:(id)a0;
+ (id)parentGroupClauseForComparison:(long long)a0;
+ (id)predicatesForSmartGroupsWithComparison:(long long)a0 helper:(id /* block */)a1;
+ (id)hasNoVisibleParentGroupsPredicate;
+ (id)hasVisibleParentGroupsPredicate;
+ (id)predicateForMemberOfGroup:(id)a0 comparison:(long long)a1 implClass:(Class)a2 context:(id)a3 basePersistenceURL:(id)a4;

@end
