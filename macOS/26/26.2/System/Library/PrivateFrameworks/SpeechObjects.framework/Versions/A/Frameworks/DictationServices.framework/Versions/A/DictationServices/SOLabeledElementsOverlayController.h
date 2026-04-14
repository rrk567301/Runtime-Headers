@class NSMutableArray;

@interface SOLabeledElementsOverlayController : NSObject <SOLabeledElementsOverlayControllerProtocol>

@property (retain, nonatomic) NSMutableArray *labeledElements;
@property (nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (id)init;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)addLabelViewsForElements:(id)a0;
- (void)addLabeledElements:(id)a0;
- (void)arrangeNewLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (void)hideLabeledElements;
- (void)removeLabelViews;
- (void)showLabeledElements;

@end
