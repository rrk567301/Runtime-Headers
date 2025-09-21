@class NSArray, NSHashTable, FCKeyValueStore;

@interface FCOfflineIssueList : NSObject {
    FCKeyValueStore *_localStore;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSArray *issueIDs;
@property (readonly, nonatomic) NSArray *sortedIssueIDs;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeAllIssues;
- (void)removeIssueIDs:(id)a0;
- (void)addIssueID:(id)a0 source:(long long)a1;
- (char)containsIssueID:(id)a0;
- (id)dateAddedForIssueID:(id)a0;
- (id)dateRemovedForIssueID:(id)a0;
- (char)everContainedIssueID:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0 appActivityMonitor:(id)a1 backgroundTaskable:(id)a2;
- (long long)sourceForIssueID:(id)a0;

@end
