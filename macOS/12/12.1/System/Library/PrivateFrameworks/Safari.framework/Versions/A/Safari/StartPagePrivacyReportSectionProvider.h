@class NSString, NSArray, PrivacyReportStartPageViewItem;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPagePrivacyReportSectionProvider : NSObject <StartPageCollectionSectionProvider> {
    PrivacyReportStartPageViewItem *_privacyReportViewTemplateItem;
    long long _numberOfTrackers;
    BOOL _needsReload;
}

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
- (void)reloadData;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)_sectionTitle;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0;
- (void)_crossSiteTrackingPreventionStatusDidChange:(id)a0;
- (void)_reloadSection;

@end
