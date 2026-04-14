@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *m_ptr; } _match;
    BOOL _isSynthesized;
}

@property (readonly, nonatomic) id<WBSURLCompletionMatchData> data;
@property (readonly, nonatomic) float weight;

- (BOOL)isSynthesized;
- (id)title;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)originalURLString;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (long long)visitCountScore;
- (id)cloudTabDeviceName;
- (BOOL)containsBookmark;
- (BOOL)containsReadingListItem;
- (id)initWithWBSBookmarkAndHistoryCompletionMatch:(id)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (double)lastVisitTimeInterval;
- (BOOL)matchesAutocompleteTrigger;
- (BOOL)onlyContainsCloudTab;
- (id)parsecDomainIdentifier;
- (float)topSitesScore;
- (id)userVisibleURLString;
- (BOOL)wasPromotedAsSearchResultTopHitWithTitleMatch;

@end
