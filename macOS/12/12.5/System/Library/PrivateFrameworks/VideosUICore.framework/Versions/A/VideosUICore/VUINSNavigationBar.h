@class VUINSNavigationItem, VUINSNavigationBarBackgroundView, VUINSNavigationBarButton, NSView, NSArray, NSColor;
@protocol VUINSNavigationBarDelegate;

@interface VUINSNavigationBar : NSView

@property (retain, nonatomic) VUINSNavigationItem *topItem;
@property (retain, nonatomic) VUINSNavigationItem *backItem;
@property (retain, nonatomic) VUINSNavigationBarBackgroundView *backgroundView;
@property (retain, nonatomic) VUINSNavigationBarButton *backButton;
@property (retain, nonatomic) NSView *leftItemsContainerView;
@property (copy, nonatomic) NSArray *leftBarButtonViews;
@property (retain, nonatomic) NSView *titleView;
@property (retain, nonatomic) NSView *rightItemsContainerView;
@property (copy, nonatomic) NSArray *rightBarButtonViews;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSColor *barTintColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<VUINSNavigationBarDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)reload:(BOOL)a0;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (void)showEdgeAppearance:(BOOL)a0;
- (id)_createStackViewAddSubViews:(id)a0;
- (void)_updateNavigationBarWithItem:(id)a0;
- (id)_createDefaultTitleTextField;
- (id)_barButtonViewFromItem:(id)a0;

@end
