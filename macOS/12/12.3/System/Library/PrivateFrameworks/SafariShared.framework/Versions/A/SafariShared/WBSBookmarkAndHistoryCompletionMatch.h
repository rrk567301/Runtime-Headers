@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *m_ptr; } _match;
}

@property (readonly, nonatomic) id<WBSURLCompletionMatchData> data;
@property (readonly, nonatomic) float weight;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)title;
- (id)originalURLString;
- (BOOL)containsBookmark;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (id)initWithWBSBookmarkAndHistoryCompletionMatch:(id)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (id)userVisibleURLString;
- (id)parsecDomainIdentifier;
- (long long)visitCountScore;
- (float)topSitesScore;

@end
