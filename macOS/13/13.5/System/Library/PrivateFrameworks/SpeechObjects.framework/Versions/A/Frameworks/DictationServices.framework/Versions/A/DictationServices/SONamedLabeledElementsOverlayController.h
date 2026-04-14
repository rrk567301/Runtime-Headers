@class NSMutableArray, SONumberedLabeledElementsOverlayController;

@interface SONamedLabeledElementsOverlayController : SOCyclingController <SOLabeledElementsOverlayControllerProtocol>

@property (retain) NSMutableArray *containers;
@property (retain) NSMutableArray *labeledElements;
@property (nonatomic) SONumberedLabeledElementsOverlayController *numberLabeledElementsOverlayController;
@property BOOL isActive;

- (void)dealloc;
- (id)init;
- (void)_adjustLabelPositionForWindow:(id)a0 inContainer:(id)a1 toAvoidCollidingWithWindow:(id)a2;
- (void)_arrangeNameViews:(id)a0 withinContainer:(id)a1;
- (void)_reloadViews;
- (void)addLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (id)containersInCycle;
- (void)hideLabeledElements;
- (void)showLabeledElements;

@end
