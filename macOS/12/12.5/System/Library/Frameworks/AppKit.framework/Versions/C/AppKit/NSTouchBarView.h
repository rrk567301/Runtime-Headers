@class NSLayoutXAxisAnchor, NSArray, NSOrderedSet, NSTouchBarLayout, NSTouchBarItemContainerView, CALayer, NSMutableSet, NSMapTable, NSTouchBarItemTree;

@interface NSTouchBarView : NSView <NSCoding> {
    NSTouchBarItemTree *_itemTree;
    NSMapTable *_itemsToViews;
    NSMapTable *_oldBarsToIdentifiers;
    NSMapTable *_newBarsToIdentifiers;
    NSArray *_visibleBars;
    NSArray *_arrangedViews;
    NSMutableSet *_detachedViews;
    NSOrderedSet *_centerViews;
    NSLayoutXAxisAnchor *_visualCenterAnchor;
    NSTouchBarLayout *_layoutManager;
    NSMapTable *_itemsToAttributes;
    NSTouchBarItemContainerView *_itemChangingPositions;
    unsigned char _layingOut : 1;
    unsigned char _suppressesTransitionAnimations : 1;
    unsigned char _arrangedViewsNeedsUpdate : 1;
    unsigned char _isInCustomizationPalette : 1;
    unsigned char _requiresTrueCenterLayout : 1;
    unsigned char _overlayRequiresTrueCenterLayout : 1;
    CALayer *_clipIndicator;
    CALayer *_escIndicator;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
}

@property double defaultItemPadding;
@property BOOL isInCustomizationPalette;
@property (retain) NSArray *touchBars;
@property (copy) NSTouchBarItemTree *itemTree;
@property (readonly) NSLayoutXAxisAnchor *visualCenterXAnchor;
@property BOOL allowsTransitionAnimations;
@property (readonly) BOOL layingOutSubviews;
@property (getter=isMissingEscKeyReplacement) BOOL missingEscKeyReplacement;
@property BOOL requiresReducedMetricsCompression;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (void)_itemPositionChangingForContainerView:(id)a0;
- (void)_visibilityPriorityChangingForContainerView:(id)a0;
- (void)_refreshSubviews;
- (BOOL)shouldAnimateNextLayoutPass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)_layoutSubtreeWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isTouchInsideContent:(struct CGPoint { double x0; double x1; })a0;
- (void)_noteArrangedViewsNeedsUpdate;
- (void)_updateArrangedViews;
- (void)withAnimationsSuppressed:(id /* block */)a0;
- (void)_updateItemPriorityValues;
- (void)_installTransitionIfEnabled;
- (id)newContainerViewForItem:(id)a0;
- (void)_addContainerView:(id)a0;
- (void)_removeContainerView:(id)a0;
- (void)_positionSubviews;
- (void)_configureLayoutManager;
- (void)_reattachViews:(id)a0;
- (void)_detachViews:(id)a0;
- (BOOL)_barsAllowTransitionAnimation;
- (BOOL)_shouldPerformTransitionAnimations;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)isLayingOut;
- (void)setShouldAnimateNextLayoutPass:(BOOL)a0;

@end
