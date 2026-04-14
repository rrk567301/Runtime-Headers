@class SafariWebBookmarkList, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _reloadNotificationPending;
}

@property (weak) SafariWebBookmarkList *topBookmark;
@property (readonly, nonatomic, getter=isEnumeratingBookmarkMatches) BOOL enumeratingBookmarkMatches;
@property (readonly, nonatomic, getter=isEnumeratingHistoryMatches) BOOL enumeratingHistoryMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCompletionDatabase;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;
- (void)getBestMatchesForTypedString:(id)a0 topHits:(id *)a1 matches:(id *)a2 limit:(unsigned long long)a3 forQueryID:(long long)a4 withSearchParameters:(id)a5;
- (void)_historyOrBookmarksDidChange:(id)a0;

@end
