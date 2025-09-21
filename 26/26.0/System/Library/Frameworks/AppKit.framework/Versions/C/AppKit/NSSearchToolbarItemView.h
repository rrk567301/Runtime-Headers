@class NSSearchToolbarItem, NSString, NSView, NSLayoutConstraint, NSButton, CABasicAnimation;
@protocol NSObject, _NSBridgedSearchField;

@interface NSSearchToolbarItemView : NSView <CAAnimationDelegate, NSToolbarItemNonContiguousLayout> {
    NSSearchToolbarItem *_searchToolbarItem;
    struct CGSize { double width; double height; } _minimumCollapsedSize;
    struct CGSize { double width; double height; } _minimumExpandedSize;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
    CABasicAnimation *_minWidthConstraintAnimation;
    BOOL _enabled;
    BOOL _expanded;
    BOOL _cachedSizeValid;
    BOOL _keyFocusAfterAnimation;
    BOOL _animatingForMinWidthConstraint;
    unsigned long long _toolbarControlSize;
    double maxWindowWidthInLiveResize;
    id<NSObject> _windowResizeObserver;
}

@property (retain) NSView<_NSBridgedSearchField> *searchField;
@property (retain) NSButton *searchButton;
@property BOOL usesPreferredWidth;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isExpanded) BOOL expanded;
@property (readonly) BOOL shouldBeExpanded;
@property (readonly) BOOL forcesExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)controlSize;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)setControlSize:(unsigned long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateConstraints;
- (void)setExpanded:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_accessibilityShouldBeTreatedAsButtonForToolbar;
- (void)_cacheSize;
- (BOOL)_inCustomizationPalette;
- (void)_invalidateCachedSizes;
- (struct CGSize { double x0; double x1; })_maximumExpandedSize;
- (struct CGSize { double x0; double x1; })_minimumCollapsedSize;
- (struct CGSize { double x0; double x1; })_minimumExpandedSize;
- (void)_postProcessForBeginningSearchInteraction;
- (void)_updateMinWidthConstraints:(BOOL)a0;
- (BOOL)aboveExpansionLimit;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginSearchInteraction;
- (void)detachFromToolbarItem;
- (BOOL)forcesExpanded;
- (id)initWithSearchToolbarItem:(id)a0;
- (void)searchButtonClicked:(id)a0;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldBeExpanded;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

@end
