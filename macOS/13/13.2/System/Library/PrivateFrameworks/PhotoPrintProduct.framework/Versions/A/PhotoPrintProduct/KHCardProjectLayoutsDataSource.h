@class NSString, NSMutableArray, NSArray;

@interface KHCardProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHEditorDataSource> {
    NSMutableArray *_collectionLayouts;
    NSArray *_displayFilters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)undoManager;
- (id)accessibilityValues;
- (id)collectionLayouts;
- (void)resetCollectionLayouts;
- (id)editorTitle;
- (long long)numberOfEditorLayouts;
- (id)editorLayoutAtIndex:(long long)a0;
- (long long)indexOfEditorLayout:(id)a0;
- (id)editorLayoutForSelection:(id)a0;
- (id)editorIndexSetForSelectAll;
- (id)editorIndexSetForSelectAllLeading;
- (id)editorIndexSetForSelectAllTrailing;
- (unsigned long long)numberOfVisibleEditorPagesPerPage;
- (long long)numberOfEditorPages;
- (id)editorLayoutsForPageAtIndex:(long long)a0;
- (id)editorTitleForLayoutsAtPageIndex:(long long)a0;
- (long long)pageIndexForEditorLayout:(id)a0;
- (BOOL)shouldSelectEditorLayoutAtIndex:(long long)a0;
- (id)selectionIndicesForProposedSelectionIndex:(long long)a0;
- (void)clearEditorPlacedPhotosForLayouts:(id)a0;
- (void)clearEditorPlacedPhotos;
- (double)editorScaleForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (double)bestFitScaleForLayout:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)editorLayoutAtIndexIsHidden:(long long)a0;
- (long long)numberOfSpreadEditorLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)editorDisplayFiltersAccessibilityLabel;
- (id)editorDisplayFilters;
- (unsigned long long)pageIndexForDisplayFilter:(id)a0;
- (id)editorDisplayFilterForPageIndex:(unsigned long long)a0;
- (BOOL)adjustEditorPageCount:(unsigned long long)a0;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)a0;
- (void)moveEditorLayoutAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)exchangeEditorLayoutAtIndex:(long long)a0 withEditorLayoutAtIndex:(long long)a1;
- (id)accessibilityValuesForLayout:(id)a0;

@end
