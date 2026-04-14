@class NSString;

@interface GameCenterUI.GKSuggestionsContainerCell : GameCenterUI.GKSuggestionsContainerBaseCell <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout, GameCenterUI.GKSuggestionsPlayerSelectionProxy, GameCenterUI.GKPickerGroupCellProxy> {
    void /* unknown type, empty encoding */ dataSourceIdentifier;
    void /* unknown type, empty encoding */ presentedExpandedGroupViewController;
    void /* unknown type, empty encoding */ suggestionsDelegate;
    void /* unknown type, empty encoding */ nearbyPlayers;
    void /* unknown type, empty encoding */ suggestionsDataSource;
    void /* unknown type, empty encoding */ horizontalInset;
    void /* unknown type, empty encoding */ dataLoaded;
    void /* function */ nearbyIconTapHandler;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) double defaultCellHeight;

@property (nonatomic, weak) void /* function */ suggestionsCollectionView;
@property (nonatomic, weak) void /* function */ containerView;
@property (nonatomic, weak) void /* function */ collectionViewTopConstraint;
@property (nonatomic, weak) void /* function */ collectionViewBottomConstraint;
@property (nonatomic, weak) void /* function */ presentationViewController;
@property (nonatomic, weak) void /* function */ multiplayerPickerDataSource;
@property (nonatomic, weak) void /* function */ containerViewLeadingConstraint;
@property (nonatomic, weak) void /* function */ containerViewTrailingConstraint;
@property (nonatomic, copy) id /* block */ nearbyIconTapHandler;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (void)layout;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)didSelectPlayerGroup:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)configureWithDelegate:(id)a0 nearbyPlayers:(id)a1;
- (void)didAttemptSelectingAlreadySelectedPlayers:(id)a0 inGroup:(id)a1;
- (void)didDeselectPlayerGroup:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)didDeselectPlayers:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)didExceedAvailablePlayers;
- (void)didSelectPlayers:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)donateGroupToPeopleSuggester:(id)a0;
- (void)expandGroupAt:(struct CGPoint { double x0; double x1; })a0;
- (long long)getMaxPlayerCount;
- (long long)getSelectedPlayerCount;
- (id)getSuggestedPlayerGroups;
- (BOOL)playerIsSelectable:(id)a0;
- (BOOL)playerIsSelected:(id)a0;
- (void)updateNearbyPlayers:(id)a0;
- (void)updateVisibleItemsWithPlayers:(id)a0 excludedIndexPath:(id)a1;

@end
