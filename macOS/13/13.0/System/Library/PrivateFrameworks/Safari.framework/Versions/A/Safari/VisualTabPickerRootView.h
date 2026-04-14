@class VisualTabPickerCloudTabsView, VisualTabPickerGridView, VisualTabPickerSearchField, VisualTabPickerViewController, NSScrollView, NSView, BackgroundColorView;

@interface VisualTabPickerRootView : MouseEventBlockingView {
    NSScrollView *_scrollView;
    NSView *_topBarView;
    BackgroundColorView *_topBarViewSeparator;
}

@property (readonly, nonatomic) VisualTabPickerGridView *gridView;
@property (readonly, nonatomic) VisualTabPickerSearchField *searchField;
@property (readonly, nonatomic) VisualTabPickerCloudTabsView *cloudTabsView;
@property (weak, nonatomic) VisualTabPickerViewController *visualTabPickerViewController;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (BOOL)acceptsFirstResponder;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerViewController:(id)a1;
- (void)cancelOperation:(id)a0;
- (void)startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)makeSearchFieldFirstResponder;
- (void)showSearchField;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_startTopBarAndCloudViewAnimation:(long long)a0;
- (void)_didScroll:(id)a0;
- (void)prepareForEntryAnimation;
- (void)_showOrHideTopBarSeparator:(BOOL)a0;
- (void)setUpSubviews;
- (BOOL)_isShowingSearchField;

@end
