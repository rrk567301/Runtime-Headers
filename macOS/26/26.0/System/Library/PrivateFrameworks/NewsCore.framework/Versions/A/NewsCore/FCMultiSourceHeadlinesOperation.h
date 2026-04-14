@class NSArray, NSDictionary, FCEdgeCacheHint, FCCachePolicy;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCMultiSourceHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *articleListIDs;
@property (copy, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticles;
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticleLists;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (retain, nonatomic) NSDictionary *heldRecordsByType;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;
@property (copy, nonatomic) id /* block */ heldRecordsCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)init;
- (void).cxx_destruct;

@end
