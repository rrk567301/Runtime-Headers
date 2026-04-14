@class NSView, NSImage, CPKBaseMatrix;

@interface CPKCategoriesView : NSView {
    long long _categoryCount;
    CPKBaseMatrix *_fixedCategories;
    CPKBaseMatrix *_scrollableCategories;
    NSView *_scrollEnclosure;
    BOOL _isRTLLayout;
    long long _separatorIndex;
    long long _scrollerIndex;
    long long _lastSelectedIndex;
    NSImage *_nextPageIndicator;
    NSImage *_prevPageIndicator;
    NSImage *_dividerImage;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)state;
- (void)setState:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0 atIndex:(long long)a1;
- (void)setCategoryTitles:(id)a0 descriptions:(id)a1;
- (void)setSelectedCategoryIndex:(long long)a0;
- (long long)initialSelectionForState:(id)a0;
- (void)fillCategoryInfo:(id /* block */)a0;
- (id)selectedCategoryAXElement;
- (void)myDefaultAction:(id)a0;
- (void)scrollItemClicked:(id)a0;
- (void)_selectedCatageoryIndex:(long long)a0 byUser:(BOOL)a1;
- (long long)_cellIndexFromCategoryIndex:(long long)a0 outMatrix:(id *)a1;
- (long long)_categoryIndexFromCellIndex:(long long)a0 inMatrix:(id)a1;
- (BOOL)_shouldIgnoreUserSelectionOnMatrix:(id)a0;
- (void)_scrollToShowCategory:(long long)a0 animate:(BOOL)a1 withCompletion:(id /* block */)a2;
- (long long)selectedCategoryIndex;

@end
