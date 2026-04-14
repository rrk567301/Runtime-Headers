@class QLScrollController, NSString, QLDrawingLayer, NSMapTable, CALayer, NSObject, CAScrollLayer;
@protocol QLPreviewPageNavigationDataSource;

@interface QLPreviewPageNavigationView : NSView <QLScrollable, QLDrawingLayerDelegate> {
    NSObject<QLPreviewPageNavigationDataSource> *_dataSource;
    BOOL _enableUpdates;
    BOOL _needsUpdate;
    NSMapTable *_pageThumbnails;
    CALayer *_rootLayer;
    CAScrollLayer *_pagesLayer;
    QLScrollController *_scrollController;
    int _gradientPositions;
    double _deltas;
    double _scrollValue;
}

@property (retain) QLDrawingLayer *topGradientLayer;
@property (retain) QLDrawingLayer *bottomGradientLayer;
@property id<QLPreviewPageNavigationDataSource> dataSource;
@property BOOL enableUpdates;
@property double verticalScrollValue;
@property (readonly) double verticalKnobProportion;
@property double horizontalScrollValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVerticalScrollValue;
+ (id)keyPathsForValuesAffectingVerticalKnobProportion;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityChildren;
- (id)accessibilitySelectedChildren;
- (BOOL)mouseDownCanMoveWindow;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityEnabled;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)scrollWheel:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned int)_CAViewFlags;
- (struct CGSize { double x0; double x1; })_pageSize;
- (void)_setCurrentPage:(unsigned long long)a0;
- (void)_updatePages;
- (BOOL)mustHandleEvent:(id)a0;
- (void)drawDrawingLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)scaleFactorDidChange:(id)a0;
- (void)_setupGradientLayers;
- (void)_updateWithUpdatedDataSource;
- (BOOL)_getFullHeight:(double *)a0 visibleHeight:(double *)a1;
- (void)_updateScroll;
- (void)_scrollToValue:(double)a0 animate:(BOOL)a1;
- (int)_selectedHighlightMode;
- (id)_pageThumbnailForPage:(unsigned long long)a0;
- (void)_updatePageThumbnails;
- (void)refreshThumbnails;
- (void)_refreshPageThumbnailsReplacingExisting:(BOOL)a0;
- (void)updateThumbnailForPage:(long long)a0;
- (void)_updateThumbnailForPage:(long long)a0 replaceExisting:(BOOL)a1;

@end
