@class NSString, NSScrollView, PXGadgetAnchorHelper, PXGadgetSpecManager, PXGadgetNavigationHelper, PXGadgetDataSourceManager, NSMutableSet, NSCollectionView, PXGadgetDataSource;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXGadgetNSViewController : UXViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout, PXGadgetAnchorHelperDelegate, PXGadgetNavigationHelperDelegate, PXSectionedDataSourceManagerObserver, PXGadgetDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    NSMutableSet *_registeredCellReuseIdentifiers;
}

@property (class, readonly, nonatomic) Class gadgetSpecClass;

@property (readonly, nonatomic) NSScrollView *scrollView;
@property (readonly, nonatomic) BOOL isUpdateNeeded;
@property (retain, nonatomic) PXGadgetDataSource *dataSource;
@property (nonatomic) BOOL isCurrentlyVisible;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) PXGadgetSpecManager *specManager;
@property (retain, nonatomic) PXGadgetNavigationHelper *navigationHelper;
@property (retain, nonatomic) PXGadgetAnchorHelper *anchorHelper;
@property (readonly, nonatomic) NSCollectionView *collectionView;
@property (readonly, nonatomic) PXGadgetDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)dismissAlert:(id)a0;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0;
- (id)gadgetViewControllerHostingGadget:(id)a0;
- (void)gadget:(id)a0 animateChanges:(id /* block */)a1;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (BOOL)gadget:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)presentGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginSheetForGadgetViewController:(id)a0;
- (void)endSheetForGadgetViewController:(id)a0;
- (void)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (id)gadgetDataSourceForNavigationHelper:(id)a0;
- (BOOL)navigateToGadget:(id)a0 animated:(BOOL)a1;
- (void)navigationHelperDidNotFindValidGadget:(id)a0;
- (id)sortedVisibleIndexPathsForAnchorHelper:(id)a0;
- (BOOL)anchorHelper:(id)a0 indexPathIsFullyVisible:(id)a1;
- (void)_setupViewHierarchyAndConstraints;
- (void)_initializeHelpers;
- (void)_initializeDataSource;
- (void)_updateCollectionViewIfNeeded;
- (void)_updateHeadersIfNeeded;
- (void)_updateGadgetsToSpecIfNeeded;
- (void)_configureSectionHeaderView:(id)a0 forSection:(unsigned long long)a1;
- (id)_gadgetAtIndexPath:(id)a0;
- (void)_gadgetHeightDidChange;
- (void)_gadgetSectionDidChange:(id)a0;
- (id)_indexPathForGadget:(id)a0;
- (void)_dataSourceDidChange;
- (void)_gadgetSpecDidChange;

@end
