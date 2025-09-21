@class NSDiffableDataSourceSnapshot;

@interface STKImageGlyphDataSource : STKImageGlyphAggregatingDataSource {
    void /* unknown type, empty encoding */ dataSourceUpdatedObserver;
    void /* unknown type, empty encoding */ _currentSnapshot;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotNotifier;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ waitingSnapshotJobs;
    void /* unknown type, empty encoding */ snapshotRetryCount;
    void /* unknown type, empty encoding */ _pendingViewConfig;
    void /* unknown type, empty encoding */ _activeViewConfig;
    void /* unknown type, empty encoding */ animatedIdentifiers;
}

@property (class, nonatomic, readonly) STKImageGlyphDataSource *sharedInstance;

@property (nonatomic, copy) NSDiffableDataSourceSnapshot *snapshot;
@property (nonatomic, readonly) char canShowMemoji;
@property (nonatomic, readonly) char canShowStickers;
@property (nonatomic, readonly) char canShowEmoji;
@property (nonatomic, readonly) long long memojiCategoryIndex;
@property (nonatomic, readonly) long long stickersCategoryIndex;
@property (nonatomic, readonly) long long recentCategoryIndex;
@property (nonatomic, readonly) long long emojiCategoryIndex;
@property (nonatomic, readonly) long long emojiPrefixSectionCount;
@property (nonatomic, readonly) char didAcceptRestrictedDistributionTerms;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)configureWith:(id)a0;
- (void)donateImageGlyphToRecents:(id)a0;
- (char)isEmojiSection:(long long)a0;
- (id)indexPathForCategoryIndex:(long long)a0;
- (char)isMemojiSection:(long long)a0;
- (char)isRecentSection:(long long)a0;
- (char)isStickerSection:(long long)a0;
- (char)allowsRearrangeForSection:(long long)a0;
- (id)initWithDataSources:(id)a0;
- (void)makeSnapshot;

@end
