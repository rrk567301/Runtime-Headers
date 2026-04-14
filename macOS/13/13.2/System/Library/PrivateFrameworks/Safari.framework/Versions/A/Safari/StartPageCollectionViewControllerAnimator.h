@class StartPageCollectionViewController, NSString;

@interface StartPageCollectionViewControllerAnimator : NSObject <StartPageCollectionSectionProviderDelegate>

@property (readonly, nonatomic) StartPageCollectionViewController *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)animator;
- (BOOL)startPageCollectionSectionProvider:(id)a0 canCollapseSection:(long long)a1;
- (BOOL)startPageCollectionSectionProvider:(id)a0 isCollapsedSection:(long long)a1;
- (void)startPageCollectionSectionProvider:(id)a0 enumerateItemsAtIndexPaths:(id)a1 usingBlock:(id /* block */)a2;
- (id)startPageCollectionSectionProvider:(id)a0 itemAtIndexPath:(id)a1;
- (id)startPageCollectionSectionProvider:(id)a0 indexPathForItem:(id)a1;
- (id)startPageCollectionSectionProvider:(id)a0 supplementaryViewForElementKind:(id)a1 atIndexPath:(id)a2;
- (long long)startPageCollectionSectionProvider:(id)a0 firstSectionIndexForInsertion:(BOOL)a1;
- (void)startPageCollectionSectionProvider:(id)a0 insertSections:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 deleteSections:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 reloadSections:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 moveSection:(long long)a1 toSection:(long long)a2;
- (void)startPageCollectionSectionProvider:(id)a0 insertItemsAtIndexPaths:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 deleteItemsAtIndexPaths:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 reloadItemsAtIndexPaths:(id)a1;
- (void)startPageCollectionSectionProvider:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)startPageCollectionSectionProvider:(id)a0 performBatchUpdates:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)startPageCollectionSectionProvider:(id)a0 invalidateLayoutUsingBlock:(id /* block */)a1;
- (void)startPageCollectionSectionProvider:(id)a0 didToggleCollapse:(BOOL)a1;
- (void)startPageCollectionSectionProvider:(id)a0 hideAllItemsInSections:(id)a1 andPerformUpdates:(id /* block */)a2;
- (id)browserWindowControllerForStartPageCollectionSectionProvider:(id)a0;
- (BOOL)shouldSuppressBookmarkReloadsInStartPageCollectionSectionProvider:(id)a0;
- (void)startPageCollectionSectionProvider:(id)a0 suppressBookmarkReloadsWhilePerformingBlock:(id /* block */)a1;
- (void)scrollToTopForStartPageCollectionSectionProvider:(id)a0;
- (void)startPageCollectionSectionProvider:(id)a0 updateVisibilityOfSectionsWithDataAvailable:(BOOL)a1;

@end
