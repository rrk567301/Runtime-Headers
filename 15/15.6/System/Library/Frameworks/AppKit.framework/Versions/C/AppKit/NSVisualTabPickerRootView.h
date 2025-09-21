@class NSVisualTabPickerSearchField, NSVisualTabPickerRootViewController, NSVisualTabPickerGridView, NSScrollView, NSView;

@interface NSVisualTabPickerRootView : NSView {
    NSScrollView *_scrollView;
    NSView *_topBarView;
}

@property (readonly, nonatomic) NSVisualTabPickerGridView *gridView;
@property (readonly, nonatomic) NSVisualTabPickerSearchField *searchField;
@property (weak, nonatomic) NSVisualTabPickerRootViewController *visualTabPickerViewController;

- (void).cxx_destruct;
- (void)showSearchField;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_startPerspectiveAnimation:(long long)a0;
- (void)_startTopBarAndCloudViewAnimation:(long long)a0;
- (id)_tabPickerThumbnailViews;
- (char)acceptsFirstResponder;
- (void)cancelOperation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerViewController:(id)a1;
- (void)makeSearchFieldFirstResponder;
- (char)performKeyEquivalent:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUpSubviewsShowingNewTabButton:(char)a0 highlightingTiles:(char)a1 showingCloseButtons:(char)a2;
- (void)startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
