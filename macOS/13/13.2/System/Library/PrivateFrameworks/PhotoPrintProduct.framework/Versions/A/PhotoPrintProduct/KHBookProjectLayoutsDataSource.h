@class KHProjectLayout, NSString, NSMutableDictionary, NSMutableArray;

@interface KHBookProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHMutableEditorDataSource> {
    NSMutableArray *_collectionLayouts;
    KHProjectLayout *_rightEndSheetLayout;
    KHProjectLayout *_leftEndSheetLayout;
    KHProjectLayout *_frontSoftCoverHiddenLayout;
    KHProjectLayout *_backSoftCoverHiddenLayout;
    NSMutableDictionary *_blankLayouts;
    unsigned long long _leftEndSheetLayoutIndex;
    unsigned long long _rightEndSheetLayoutIndex;
    unsigned long long _softcoverHiddenFrontLayoutIndex;
    unsigned long long _softcoverHiddenBackLayoutIndex;
}

@property (readonly, nonatomic) KHProjectLayout *rightEndSheetLayout;
@property (readonly, nonatomic) KHProjectLayout *leftEndSheetLayout;
@property (readonly, nonatomic) KHProjectLayout *frontSoftCoverHiddenLayout;
@property (readonly, nonatomic) KHProjectLayout *backSoftCoverHiddenLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_blankLayoutInProject:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)title;
- (id)undoManager;
- (id)accessibilityValues;
- (id)collectionLayouts;
- (unsigned long long)projectIndexForIndexPath:(id)a0;
- (void)resetCollectionLayouts;
- (id)indexPathForProjectLayoutIndex:(unsigned long long)a0;
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
- (BOOL)adjustEditorPageCount:(unsigned long long)a0;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)a0;
- (void)moveEditorLayoutAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)exchangeEditorLayoutAtIndex:(long long)a0 withEditorLayoutAtIndex:(long long)a1;
- (id)accessibilityValuesForLayout:(id)a0;
- (long long)editorRearrangingStyle;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })targetRangeToRearrangeFromSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })targetRangeForMoveOfItemsAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)shouldExchangeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)moveEditorLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(long long)a1;
- (BOOL)adjustDensitySetting:(unsigned long long)a0 createDatabaseObjects:(BOOL)a1;
- (void)removeEditorLayoutsInIndexSet:(id)a0;
- (void)insertEditorLayoutAtIndex:(unsigned long long)a0;
- (void)addEditorLayouts:(unsigned long long)a0;
- (void)insertEditorSpreadLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_placementIsCoverOrFlapForLayoutAtIndexPath:(id)a0;
- (BOOL)_isSoftcoverProductType;
- (BOOL)addLayoutAtIndexPath:(id)a0;
- (BOOL)addSpreadLayoutAtIndexPath:(id)a0;
- (BOOL)_addLayoutAtIndexPath:(id)a0 spread:(BOOL)a1;
- (BOOL)removeLayoutAtIndexPath:(id)a0;
- (BOOL)removeLayoutsAtIndexPaths:(id)a0;
- (unsigned long long)stateForChangeType:(unsigned long long)a0 withLayoutsAtIndexPaths:(id)a1;
- (BOOL)_shouldExchangeLayoutAtIndex:(long long)a0 withProposedIndex:(long long)a1;
- (BOOL)_canMoveLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(long long)a1;

@end
