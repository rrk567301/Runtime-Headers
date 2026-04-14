@class AnnotatedBookmarksSidebarViewController;

@interface AnnotatedBookmarksSidebarTableView : TableViewPlus

@property (weak, nonatomic) AnnotatedBookmarksSidebarViewController *controller;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRecogizeLongPress:(id)a0;

@end
