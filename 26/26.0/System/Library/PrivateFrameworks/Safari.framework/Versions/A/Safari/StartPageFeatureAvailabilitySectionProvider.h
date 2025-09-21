@class BrowserDataDirectories, NSString, NSArray, StartPageCollectionViewLayoutSection, NSAppearance, NSMutableDictionary, StartPageFeatureAvailabilityImportBrowserDataCollectionViewItem, NSDateFormatter;
@protocol StartPageCollectionSectionProviderDelegate, StartPageFeatureAvailabilitySectionProviderDelegate;

@interface StartPageFeatureAvailabilitySectionProvider : NSObject <StartPageFeatureAvailabilityBrowseInSafariCollectionViewItemDelegate, StartPageFeatureAvailabilityImportBrowserDataCollectionViewItemDelegate, StartPageFeatureAvailabilityCollectionViewItemDelegate, StartPageCollectionSectionProvider> {
    NSMutableDictionary *_cachedTemplateCollectionViewItems;
    long long _featureAvailabilityState;
    StartPageCollectionViewLayoutSection *_cachedLayoutSection;
    StartPageFeatureAvailabilityImportBrowserDataCollectionViewItem *_newImportBrowserDataCollectionViewItem;
    BrowserDataDirectories *_browserDataDirectories;
    unsigned long long _availableDataTypes;
    id<StartPageFeatureAvailabilitySectionProviderDelegate> _delegate;
    NSDateFormatter *_dateFormatter;
    BOOL _softwareUpdateAwarenessContentDidChange;
}

@property (readonly, nonatomic) BOOL isShowingSoftwareUpdateAwarenessSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (retain, nonatomic) NSAppearance *backgroundAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (id)_collectionViewItemWithNibName:(id)a0;
- (void)_closeFeatureAvailabilitySection;
- (double)_itemHeightForNibName:(id)a0 sectionWidth:(double)a1;
- (void)_reloadContent;
- (BOOL)_shouldShowWhatsNewInPrivateBrowsing;
- (void)_softwareUpdateAwarenessContentDidChange:(id)a0;
- (void)_startPageDidDismiss:(id)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)startPageFeatureAvailabilityBrowseInSafariCollectionViewItemDidClose:(id)a0;
- (void)startPageFeatureAvailabilityBrowseInSafariCollectionViewItemDidMakeSafariDefault:(id)a0;
- (void)startPageFeatureAvailabilityCollectionViewItemDidClose:(id)a0;
- (void)startPageFeatureAvailabilityImportBrowserDataCollectionViewItemDidClose:(id)a0;
- (void)startPageFeatureAvailabilityImportBrowserDataCollectionViewItemDidCloseAutomaticallyAfterImportBrowserData:(id)a0;
- (id)startPageSoftwareUpdateAwarenessRankedFeatures;
- (id)startPageSoftwareUpdateAwarenessTitle;

@end
