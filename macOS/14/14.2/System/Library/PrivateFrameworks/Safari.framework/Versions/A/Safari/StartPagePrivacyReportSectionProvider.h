@class NSString, NSArray, PrivacyReportStartPageViewItem;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPagePrivacyReportSectionProvider : NSObject <StartPageCollectionSectionProvider> {
    PrivacyReportStartPageViewItem *_privacyReportViewTemplateItem;
    long long _numberOfTrackers;
    BOOL _needsReload;
    NSString *_profileIdentifier;
}

@property (nonatomic, setter=_setCachedNumberOfTrackers:) long long _cachedNumberOfTrackers;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (id)_sectionTitle;
- (id)_browserWindowController;
- (void)_contentBlockerStatisticsStoreDidClose;
- (void)_crossSiteTrackingPreventionStatusDidChange:(id)a0;
- (void)_reloadSection;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)initWithProfileIdentifier:(id)a0 usesCompactAppearance:(BOOL)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;

@end
