@class NSString, NSMutableSet, NSStackView, NSObject;
@protocol NSMenuRepresentationDelegate;

@interface NSStackViewBackedMenuRepresentation : NSResponder <NSMenuRepresentable> {
    NSMutableSet *_backingViews;
    NSStackView *_rootBackingView;
    NSObject<NSMenuRepresentationDelegate> *_delegate;
    long long _numberOfArrangedViews;
    long long _numberOfBackingViews;
    BOOL _isMagicAppleMenuPositionedFirst;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)_indexCountingAppleMenu:(long long)a0;
- (void)addControlledBackingView:(id)a0 followingSystemAppearance:(BOOL)a1;
- (void)appendArrangedSubview:(id)a0;
- (id)backingView;
- (id)backingViews;
- (void)beginUpdates;
- (id)currentlyVisibleSubviews;
- (void)endSearchQuery;
- (void)endUpdates;
- (void)forEachVisibleSubviewDo:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(unsigned long long)a0;
- (id)inactiveSystemAppearanceStackViewIfExists;
- (id)initWithBackingView:(id)a0;
- (void)insertArrangedSubviewAtMenuIndex:(long long)a0 forItem:(id)a1;
- (long long)menuIndexForView:(id)a0;
- (long long)numberOfVisibleItems;
- (void)reloadData;
- (void)removeArrangedSubviewAtMenuIndex:(long long)a0;
- (void)removeControlledBackingView:(id)a0;
- (id)representationDelegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (void)setRepresentationDelegate:(id)a0;
- (void)startSearchQueryWithString:(id)a0 behavior:(unsigned long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (id)subviewAtVisibleIndex:(long long)a0;
- (id)subviewAtVisibleIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
