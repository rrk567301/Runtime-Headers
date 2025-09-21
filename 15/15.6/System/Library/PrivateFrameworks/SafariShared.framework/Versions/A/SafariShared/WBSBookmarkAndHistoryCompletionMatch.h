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
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (long long)visitCountScore;
- (id)cloudTabDeviceName;
- (char)containsBookmark;
- (char)containsReadingListItem;
- (id)initWithWBSBookmarkAndHistoryCompletionMatch:(id)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (double)lastVisitTimeInterval;
- (char)matchesAutocompleteTrigger;
- (char)onlyContainsCloudTab;
- (id)parsecDomainIdentifier;
- (float)topSitesScore;
- (id)userVisibleURLString;
- (char)wasPromotedAsSearchResultTopHitWithTitleMatch;

@end
