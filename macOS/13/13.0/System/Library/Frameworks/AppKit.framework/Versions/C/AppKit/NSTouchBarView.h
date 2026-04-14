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
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (BOOL)shouldAnimateNextLayoutPass;
- (void)_layoutSubtreeWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)_isTouchInsideContent:(struct CGPoint { double x0; double x1; })a0;
- (void)_refreshSubviews;
- (void)_visibilityPriorityChangingForContainerView:(id)a0;
- (void)_itemPositionChangingForContainerView:(id)a0;
- (BOOL)_barsAllowTransitionAnimation;
- (id)newContainerViewForItem:(id)a0;
- (void)_addContainerView:(id)a0;
- (void)_removeContainerView:(id)a0;
- (void)_detachViews:(id)a0;
- (void)_reattachViews:(id)a0;
- (void)_updateItemPriorityValues;
- (void)_noteArrangedViewsNeedsUpdate;
- (void)_updateArrangedViews;
- (void)_configureLayoutManager;
- (void)_positionSubviews;
- (BOOL)_shouldPerformTransitionAnimations;
- (void)withAnimationsSuppressed:(id /* block */)a0;
- (void)_installTransitionIfEnabled;
- (BOOL)isLayingOut;
- (void)setShouldAnimateNextLayoutPass:(BOOL)a0;

@end
