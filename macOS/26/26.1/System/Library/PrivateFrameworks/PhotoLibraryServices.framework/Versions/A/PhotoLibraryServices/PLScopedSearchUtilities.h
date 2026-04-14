@interface PLScopedSearchUtilities : NSObject

+ (void)intersectSortedArray:(const struct __CFArray **)a0 withOtherSortedArray:(struct __CFArray { } *)a1 intersectionLimit:(unsigned long long)a2;
+ (id)removeGroupsWithNonExactMatchTextFromGroups:(id)a0 searchText:(id)a1;
+ (id)removeSynonymsOfOtherGroupsInGroups:(id)a0;
+ (void)searchIndexIdsFromUUIDs:(id)a0 searchResultTypes:(unsigned long long)a1 psiDatabase:(id)a2 completion:(id /* block */)a3;

@end
