@class NSCollectionView, NSArray, NSString, NSSet, GKLeaderboardAddFriendsCell, GKLeaderboard, GKLeaderboardEntry;
@protocol GKLeaderboardScoreDelegate;

@interface GKLeaderboardScoreDataSource : GKGameLayerCollectionDataSource <NSScrollViewDelegate>

@property (retain, nonatomic) NSArray *entries;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL isLoadingNextData;
@property (nonatomic) BOOL isLoadingPreviousData;
@property (retain, nonatomic) NSString *additionalNextDataLoadToken;
@property (retain, nonatomic) NSString *additionalPreviousDataLoadToken;
@property (nonatomic) long long topLoadingCellItem;
@property (nonatomic) long long bottomLoadingCellItem;
@property (nonatomic) long long addFriendCellItem;
@property (nonatomic) long long noFriendsCellItem;
@property (nonatomic) long long maxRange;
@property (retain, nonatomic) GKLeaderboardEntry *localPlayerEntry;
@property (weak, nonatomic) NSCollectionView *collectionView;
@property (nonatomic) long long friendCount;
@property (nonatomic) BOOL firstLoad;
@property (retain, nonatomic) NSSet *localPlayerFriendIDs;
@property (retain, nonatomic) GKLeaderboardAddFriendsCell *sizingAddFriendsCell;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long playerScope;
@property (nonatomic) long long timeScope;
@property (nonatomic) BOOL restrictToFriendsOnly;
@property (nonatomic) long long leaderboardOccurrence;
@property (weak, nonatomic) id<GKLeaderboardScoreDelegate> leaderboardScoreDelegate;
@property (nonatomic) long long startingRank;
@property (nonatomic) BOOL autoScrollToLocalPlayerPosition;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemCount;
- (BOOL)hasData;
- (void).cxx_destruct;
- (void)didScrollInScrollView:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (double)cellSpacing;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (void)setupCollectionView:(id)a0;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (id)localPlayerEntryIndexPath;
- (void)loadInitialDataWithCompletionHandler:(id /* block */)a0;
- (void)processEntries:(id)a0 localPlayerEntry:(id)a1 totalPlayerCount:(long long)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)loadMoreDataWithStartIndex:(long long)a0 completionHandler:(id /* block */)a1;

@end
