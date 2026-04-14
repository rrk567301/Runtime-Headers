@class CCDataResourceReadAccess, CCDatabaseItemFieldIndexer, CCDatabaseCommandCache, CCSetConfiguration, NSObject, CCSet;
@protocol CCDatabaseReadOnlyAccess;

@interface CCDatabaseItemRetriever : NSObject <CCItemRetriever> {
    CCSet *_set;
    CCDataResourceReadAccess *_readAccess;
    NSObject<CCDatabaseReadOnlyAccess> *_database;
    CCDatabaseCommandCache *_cache;
    CCSetConfiguration *_setConfiguration;
    CCDatabaseItemFieldIndexer *_contentIndexer;
    CCDatabaseItemFieldIndexer *_metaContentIndexer;
}

+ (id)itemRetrieverForSet:(id)a0 database:(id)a1;
+ (id)itemRetrieverForSet:(id)a0 database:(id)a1 setConfiguration:(id)a2 contentIndexer:(id)a3 metaContentIndexer:(id)a4;

- (void).cxx_destruct;
- (void)_setDatabase:(id)a0;
- (BOOL)_enumerateSharedItemsWithSourceItemIdentifier:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateContentHashesMatchingPredicate:(id)a0 indexer:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)_enumerateInstanceHashesMatchingPredicate:(id)a0 indexer:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)_enumerateItemInstancesMatchingIndexedFieldPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateItemInstancesWithContentHash:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateItemInstancesWithInstanceHash:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateItemInstancesWithItemIdentifier:(id)a0 itemIdentifierType:(unsigned char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)_enumerateItemInstancesWithSourceItemIdentifier:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateSharedItemsMatchingIndexedFieldPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateSharedItemsWithContentHash:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateSharedItemsWithInstanceHash:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateSharedItemsWithItemIdentifier:(id)a0 itemIdentifierType:(unsigned char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)_errorForUnexpectedRow:(id)a0 fromCommand:(id)a1;
- (id)_indexerForPredicate:(id)a0 error:(id *)a1;
- (BOOL)_obtainDatabaseAccess:(id *)a0;
- (BOOL)_validateAndExtractKeyPrefixedIdentifier:(id)a0 outItemIdentifierType:(unsigned char *)a1 outItemIdentifier:(id *)a2 error:(id *)a3;
- (BOOL)_validateRow:(id)a0 fromCommmand:(id)a1 outItemInstance:(id *)a2 error:(id *)a3;
- (BOOL)_validateRow:(id)a0 fromCommmand:(id)a1 outSharedItem:(id *)a2 error:(id *)a3;
- (BOOL)enumerateItemInstancesMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateSharedItemsMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateSourceItemIdHashesMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (id)singleItemInstanceMatchingPredicate:(id)a0 error:(id *)a1;
- (id)singleSharedItemMatchingPredicate:(id)a0 error:(id *)a1;

@end
