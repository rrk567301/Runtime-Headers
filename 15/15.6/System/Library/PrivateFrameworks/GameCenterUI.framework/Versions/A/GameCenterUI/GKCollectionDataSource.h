@class NSArray, UXViewController, NSString;

@interface GKCollectionDataSource : NSObject <NSUICollectionViewDataSource, NSUICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *searchTerms;
@property (weak, nonatomic) UXViewController *presentationViewController;
@property (nonatomic) char onDarkBackground;
@property (readonly, nonatomic) long long itemCount;
@property (nonatomic) char useStandardHeaders;
@property (readonly, nonatomic) NSString *sectionHeaderText;
@property (readonly, nonatomic) double preferredCollectionHeight;
@property (nonatomic) NSString *analyticsEvent;
@property (nonatomic) NSString *analyticsEventType;
@property (readonly, nonatomic) char isSearching;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) char breakSearchInputTextIntoMultipleTerms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)itemCount;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)dismissViewController:(id)a0;
- (char)isSearching;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (char)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnfocusItemAtIndexPath:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (id)alternateSearchKeyForSection:(long long)a0;
- (id)headerTextForSection:(long long)a0;
- (char)isValidAnalytics;
- (double)preferredCollectionHeight;
- (id)searchKeyForSection:(long long)a0;
- (char)searchMatchesItem:(id)a0 inSection:(long long)a1;
- (void)searchTextHasChanged;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;
- (void)showViewController:(id)a0 popoverSourceView:(id)a1;

@end
