@class NSArray, GKGameRecord, GKLeaderboard, NSFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long visibleItemCount;
@property (readonly, nonatomic) char needsShowcaseCell;
@property (readonly, nonatomic) char needsShowMoreCell;
@property (readonly, nonatomic) NSFont *sectionHeaderFont;
@property (nonatomic, getter=isShowingMoreScores) char showingMoreScores;
@property (nonatomic) char forceInitialShowMore;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long playerScope;
@property (nonatomic) long long timeScope;
@property (weak, nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

- (void).cxx_destruct;
- (long long)itemCount;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (char)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (void)setPlayerScope:(long long)a0;
- (long long)playerScope;
- (void)setTimeScope:(long long)a0;
- (long long)timeScope;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (char)hasFriendsButton;
- (char)isShowMoreIndexPath:(id)a0;
- (char)isShowcaseIndexPath:(id)a0;
- (char)needsShowMoreCell;
- (char)needsShowcaseCell;
- (double)preferredCollectionHeight;
- (void)revealMoreItemsInCollectionView:(id)a0 section:(long long)a1 completion:(id /* block */)a2;
- (void)sectionHeaderButtonPressed:(id)a0;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;
- (void)showMoreInCollectionView:(id)a0 section:(long long)a1;

@end
