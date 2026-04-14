@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying>

@property (nonatomic) unsigned long long transactionType;
@property (copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems;
@property (copy, nonatomic) NSSet *deletedArticleIDs;

+ (id)collapsedTransactionOfTransactions:(id)a0;
+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)a0 deletedArticleIDs:(id)a1;
+ (void)_mergeItem:(id)a0 intoItem:(id)a1;
+ (id)transactionToClearSeenArticles;
+ (id)transactionOfIdentity;

- (id)initWithTransactionType:(unsigned long long)a0 insertedOrUpdatedHistoryItems:(id)a1 deletedArticleIDs:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_mergeItem:(id)a0 intoItem:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)todayPrivateDataAccessor;

@end
