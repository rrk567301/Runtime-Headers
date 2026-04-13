@class NSLayoutConstraint, NSMutableDictionary, NSView, NSString, UXNavigationItem, NSMutableArray, UXNavigationBar;

@interface _UXNavigationItemContainerView : UXView <_UXBarItemsContainer>

@property (readonly, nonatomic) UXNavigationItem *item;
@property (readonly, weak, nonatomic) UXNavigationBar *navigationBar;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double minimumWidthForExpandedTitle;
@property (nonatomic) double minimumWidthForExpandedItems;
@property (retain, nonatomic) NSView *leftView;
@property (retain, nonatomic) NSMutableArray *leftItemViews;
@property (retain, nonatomic) NSView *titleView;
@property (retain, nonatomic) NSMutableArray *rightItemViews;
@property (retain, nonatomic) NSView *rightView;
@property (retain, nonatomic) NSMutableArray *itemsSortedByPriority;
@property (retain, nonatomic) NSMutableDictionary *overflowItemsByMinimumWidth;
@property (retain, nonatomic) NSMutableArray *addedConstraints;
@property (retain, nonatomic) NSLayoutConstraint *titleCenteringConstraint;
@property (weak, nonatomic) NSView *titleCenteringConstrainedTitleView;
@property (weak, nonatomic) NSView *titleCenteringTrackedView;
@property (weak, nonatomic) NSView *titleCenteringConstraintOwnerView;
@property (readonly, nonatomic) BOOL hidesGlobalTrailingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutContainerForItem:(id)a0 navigationBar:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)updateConstraints;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateTitleView;
- (void)prepareForTransition;
- (void)cancelTransistion;
- (void)_updateItemsSortedByPriority;
- (void)_updateItemViews;
- (void)updateLeftItemViewsAnimated:(BOOL)a0;
- (void)updateRightItemViewsAnimated:(BOOL)a0;
- (id)subviewsIntersectedWithViews:(id)a0 excludingHidden:(BOOL)a1;
- (void)setTitleCenteringTrackedView:(id)a0 updateConstraints:(BOOL)a1;
- (void)_updateItemsViews:(id)a0 withNewViews:(id)a1;

@end
