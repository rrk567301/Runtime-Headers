@class NSString, NSArray, NSAppearance, StartPageTitleViewItem;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageTitleSectionProvider : NSObject <StartPageCollectionSectionProvider> {
    NSString *_profileIdentifier;
    NSString *_title;
    StartPageTitleViewItem *_item;
}

@property (retain, nonatomic) NSAppearance *appearance;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (retain, nonatomic) NSAppearance *backgroundAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)goBackForStartPageTitleViewItem:(id)a0;
- (id)initWithTitle:(id)a0 usesCompactAppearance:(BOOL)a1 inPrivateBrowsing:(BOOL)a2 profileIdentifier:(id)a3;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;

@end
