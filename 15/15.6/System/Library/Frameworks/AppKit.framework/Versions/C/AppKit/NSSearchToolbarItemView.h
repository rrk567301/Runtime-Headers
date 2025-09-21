@class NSSearchToolbarItem, NSString, NSView, NSLayoutConstraint, NSButton, CABasicAnimation;
@protocol NSObject, _NSBridgedSearchField;

@interface NSSearchToolbarItemView : NSView <CAAnimationDelegate, NSToolbarItemNonContiguousLayout> {
    NSSearchToolbarItem *_searchToolbarItem;
    struct CGSize { double width; double height; } _minimumCollapsedSize;
    struct CGSize { double width; double height; } _minimumExpandedSize;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
    CABasicAnimation *_minWidthConstraintAnimation;
    char _enabled;
    char _expanded;
    char _cachedSizeValid;
    char _keyFocusAfterAnimation;
    char _animatingForMinWidthConstraint;
    unsigned long long _toolbarControlSize;
    double maxWindowWidthInLiveResize;
    id<NSObject> _windowResizeObserver;
}

@property (retain) NSView<_NSBridgedSearchField> *searchField;
@property (retain) NSButton *searchButton;
@property char usesPreferredWidth;
@property (getter=isEnabled) char enabled;
@property (getter=isExpanded) char expanded;
@property (readonly) char shouldBeExpanded;
@property (readonly) char forcesExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setControlSize:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (char)_accessibilityShouldBeTreatedAsButtonForToolbar;
- (void)_cacheSize;
- (char)_inCustomizationPalette;
- (void)_invalidateCachedSizes;
- (struct CGSize { double x0; double x1; })_maximumExpandedSize;
- (struct CGSize { double x0; double x1; })_minimumCollapsedSize;
- (struct CGSize { double x0; double x1; })_minimumExpandedSize;
- (void)_postProcessForBeginningSearchInteraction;
- (void)_updateMinWidthConstraints:(char)a0;
- (char)aboveExpansionLimit;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (void)beginSearchInteraction;
- (unsigned long long)controlSize;
- (void)detachFromToolbarItem;
- (char)forcesExpanded;
- (id)initWithSearchToolbarItem:(id)a0;
- (char)isFlipped;
- (void)searchButtonClicked:(id)a0;
- (void)setExpanded:(char)a0;
- (void)setExpanded:(char)a0 animated:(char)a1;
- (char)shouldBeExpanded;
- (void)updateConstraints;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

@end
