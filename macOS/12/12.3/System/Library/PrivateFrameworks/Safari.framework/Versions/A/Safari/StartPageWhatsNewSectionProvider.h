@class NSString, NSArray, NSMutableDictionary, BrowserDataDirectories, StartPageCollectionViewLayoutSection, StartPageWhatsNewImportBrowserDataCollectionViewItem;
@protocol StartPageCollectionSectionProviderDelegate, StartPageWhatsNewSectionProviderDelegate;

@interface StartPageWhatsNewSectionProvider : NSObject <StartPageWhatsNewBrowseInSafariCollectionViewItemDelegate, StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate, StartPageWhatsNewInSafariCollectionViewItemDelegate, StartPageCollectionSectionProvider> {
    NSMutableDictionary *_cachedTemplateCollectionViewItems;
    long long _whatsNewState;
    StartPageCollectionViewLayoutSection *_cachedLayoutSection;
    StartPageWhatsNewImportBrowserDataCollectionViewItem *_newImportBrowserDataCollectionViewItem;
    BrowserDataDirectories *_browserDataDirectories;
    unsigned long long _availableDataTypes;
}

@property (weak) id<StartPageWhatsNewSectionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (id)init;
- (void).cxx_destruct;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)startPageWhatsNewBrowseInSafariCollectionViewItemDidMakeSafariDefault:(id)a0;
- (void)startPageWhatsNewBrowseInSafariCollectionViewItemDidClose:(id)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (void)startPageWhatsNewImportBrowserDataCollectionViewItemDidClose:(id)a0;
- (void)startPageWhatsNewImportBrowserDataCollectionViewItemDidCloseAutomaticallyAfterImportBrowserData:(id)a0;
- (void)_reloadContent;
- (void)_closeWhatsNewSection;
- (id)_collectionViewItemWithNibName:(id)a0;
- (double)_itemHeightForNibName:(id)a0 sectionWidth:(double)a1;
- (void)startPageWhatsNewInSafariCollectionViewItemDidClose:(id)a0;

@end
