@class NSPredicate, NSMutableSet, NSMutableDictionary;

@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    char *_uuidtext_path;
    BOOL _hasItems;
    BOOL _hasSharedCacheItems;
    NSPredicate *_structuredPredicate;
    NSMutableDictionary *_processNameToUUIDs;
    NSMutableDictionary *_senderNameToUUIDs;
}

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 collection:(id)a1;
- (void)dealloc;

@end
