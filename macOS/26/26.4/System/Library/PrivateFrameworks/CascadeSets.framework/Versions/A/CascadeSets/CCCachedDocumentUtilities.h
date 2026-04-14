@interface CCCachedDocumentUtilities : NSObject

+ (BOOL)isCacheEnabledSourceIdentifier:(id)a0;
+ (id)itemCacheContentWithText:(id)a0 html:(id)a1 error:(id *)a2;
+ (id)cacheDescriptorsFromAssociatedSet:(id)a0 error:(id *)a1;
+ (id)documentCachePredicateFromAssociatedSetPredicate:(id)a0 error:(id *)a1;
+ (id)documentCacheSetIdentifier;
+ (BOOL)isCacheEnabledAssociatedSet:(id)a0;
+ (BOOL)isDocumentCacheSet:(id)a0;
+ (BOOL)joinDonatedDocumentCacheContents:(id)a0 withAssociatedItemContents:(id)a1 associatedItemMetaContents:(id)a2 associatedSet:(id)a3 outContents:(id *)a4 outMetaContents:(id *)a5 error:(id *)a6;
+ (id)validateItemCacheContent:(id)a0 error:(id *)a1;
+ (id)_validateItemCacheContent:(id)a0 error:(id *)a1;
+ (id)cacheRetrieverForAssociatedSet:(id)a0 withUseCase:(id)a1 error:(id *)a2;
+ (id)hashFromCacheContent:(id)a0 error:(id *)a1;
+ (id)htmlFromCacheContent:(id)a0 error:(id *)a1;
+ (id)predicateForAssociatedInstanceUUID:(id)a0 error:(id *)a1;
+ (id)predicateForAssociatedSourceItemIdentifier:(id)a0 error:(id *)a1;
+ (id)predicateForCacheContentHash:(id)a0 error:(id *)a1;
+ (id)retrieveCacheContentWithPredicate:(id)a0 retriever:(id)a1 error:(id *)a2;
+ (id)textFromCacheContent:(id)a0 error:(id *)a1;

@end
