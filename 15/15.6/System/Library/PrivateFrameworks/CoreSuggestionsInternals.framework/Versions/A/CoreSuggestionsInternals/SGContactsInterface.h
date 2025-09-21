@interface SGContactsInterface : NSObject

+ (void)initialize;
+ (void)clearCache;
+ (char)enumerateContactsMatchingEmailAddress:(id)a0 withKeysToFetch:(id)a1 usingContactStore:(id)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (char)enumerateContactsMatchingName:(id)a0 withKeysToFetch:(id)a1 usingContactStore:(id)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (char)enumerateContactsWithFetchRequest:(id)a0 usingContactStore:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
+ (char)handleExistsInContactStoreForHandle:(id)a0 withHandleType:(id)a1;
+ (id)identifiersPredicateFromCacheForPredicate:(id)a0 isCached:(char *)a1;
+ (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1 usingContactStore:(id)a2 error:(id *)a3;
+ (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 usingContactStore:(id)a2 error:(id *)a3;
+ (id)unifiedMeContactWithKeysToFetch:(id)a0 usingContactStore:(id)a1 error:(id *)a2;

@end
