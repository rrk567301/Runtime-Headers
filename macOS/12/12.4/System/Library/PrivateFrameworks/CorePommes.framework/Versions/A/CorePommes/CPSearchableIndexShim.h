@class CSSearchableIndex;
@protocol CPIndex, CSSearchableIndexDelegate;

@interface CPSearchableIndexShim : NSObject {
    id<CPIndex> _index;
    CSSearchableIndex *_spotlightIndex;
}

@property (class, nonatomic) BOOL dualDonationEnabled;

@property (weak) id<CSSearchableIndexDelegate> indexDelegate;

+ (id)log;
+ (id)userDefaults;
+ (id)defaultSearchableIndex;
+ (void)fetchFile:(id)a0 attributesWithCompletionHandler:(id /* block */)a1;
+ (id)signpostLog;
+ (id)_summaryLoggingStringForSearchableItems:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 protectionClass:(id)a1;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void)beginIndexBatch;
- (void)endIndexBatchWithClientState:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (void)_issueCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeStateOfSearchableItemsWithUIDs:(id)a0 toState:(long long)a1;
- (id)initWithIndex:(id)a0 spotlightIndex:(id)a1;

@end
