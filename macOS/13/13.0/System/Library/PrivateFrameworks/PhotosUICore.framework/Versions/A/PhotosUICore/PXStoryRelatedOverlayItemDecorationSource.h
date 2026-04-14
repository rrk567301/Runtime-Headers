@class PXStoryRelatedOverlayLayout, PXStoryViewModel, NSString;

@interface PXStoryRelatedOverlayItemDecorationSource : PXStoryController <PXGSelectionDecorationSource> {
    long long _selectedIndex;
}

@property (retain, nonatomic) PXStoryViewModel *viewModel;
@property (weak, nonatomic) PXStoryRelatedOverlayLayout *decoratedLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)_updateSelectedRelatedIndex;
- (void)_invalidateSelectedRelatedIndex;

@end
