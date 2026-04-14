@class NSMutableDictionary, NSMutableArray;

@interface SONumberedLabeledElementsOverlayController : NSObject <SOLabeledElementsOverlayControllerProtocol> {
    NSMutableArray *_addedLabeledElements;
    NSMutableDictionary *_cachedLabeledBadgeViewsForArrowOrientationNone;
    NSMutableDictionary *_cachedLabeledBadgeViewsForArrowOrientationRight;
}

@property (retain) NSMutableDictionary *badgeWindowControllers;
@property BOOL isActive;
@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;
@property (nonatomic) BOOL prefersNoArrowBadge;
@property (nonatomic) BOOL namesMode;

- (void)dealloc;
- (id)init;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)showLabeledElements;
- (void)hideLabeledElements;
- (void)addLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (id)labeledElements;
- (id)_labeledBadgeViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3;
- (void)_udpateWindowsControllersWithNewLabeledElements:(id)a0;
- (void)_optimizeLabeledElements:(id)a0 startingNumberedLabelsAtIndex:(unsigned long long)a1 forLabelMode:(int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mostLikeyScreenFrameForLabeledElement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLabeledElement:(id)a1 justLabelRect:(BOOL)a2 additionalElements:(id)a3;

@end
