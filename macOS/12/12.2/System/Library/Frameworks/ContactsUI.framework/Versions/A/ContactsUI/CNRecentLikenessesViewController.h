@class NSTextField, NSArray, NSString, NSCollectionView;
@protocol CNCancelable, CNRecentLikenessesDataSource, NSAccessibilityGroup, CNRecentLikenessesViewDelegate;

@interface CNRecentLikenessesViewController : NSViewController <NSCollectionViewDelegate, NSCollectionViewDataSource>

@property (retain) NSTextField *descriptionField;
@property (retain) NSCollectionView<NSAccessibilityGroup> *likenessCollectionView;
@property (retain) NSArray *likenessesFromStore;
@property (retain) NSArray *displayedItems;
@property (retain) id<CNCancelable> contactLikenessesModelCancelable;
@property (weak) id<CNRecentLikenessesViewDelegate> delegate;
@property (retain, nonatomic) id<CNRecentLikenessesDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeDescriptionField;
+ (id)makeLikenessCollectionView;
+ (id)makeFlowLayout;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)loadView;
- (void)keyDown:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)setDescriptionString:(id)a0;
- (id)likeness;
- (double)desiredHeight;
- (BOOL)existingLikenessPerformPress:(id)a0;
- (void)newLikenessPerformPress;
- (void)removeLikeness:(id)a0;
- (void)setupLikenessCollectionView;
- (void)startFetchingRecentLikenesses;
- (void)stopFetchingRecentLikenesses;
- (void)displayContactLikenessesModel:(id)a0;
- (BOOL)isCollectionIndexNewButton:(id)a0;
- (id)_selectedLikeness;
- (BOOL)likenessIsDeletable:(id)a0;
- (void)addNewLikeness;
- (void)editLikeness:(id)a0;

@end
