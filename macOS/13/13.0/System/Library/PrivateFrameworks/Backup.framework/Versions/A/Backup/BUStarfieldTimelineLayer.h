@class NSObject;
@protocol BUStarfieldTimelineItem, BUStarfieldTimelineDelegate, BUStarfieldTimelineDataSource;

@interface BUStarfieldTimelineLayer : CALayer {
    void *_reserved[3];
}

@property (nonatomic) NSObject<BUStarfieldTimelineDataSource> *timelineDataSource;
@property (weak, nonatomic) NSObject<BUStarfieldTimelineDelegate> *timelineDelegate;
@property (retain, nonatomic) NSObject<BUStarfieldTimelineItem> *selectedItem;

- (void)dealloc;
- (id)init;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)reloadData;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityFocusedUIElement;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)aboutToTearDown;
- (struct BUTimelinePrivate { id x0; id x1; id x2; id x3; id x4; } *)privateData;
- (void)tearDownPrivateData;
- (void *)timelineControl;
- (void)notifyItemWasSelected:(id)a0;
- (BOOL)mouseDown:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)mouseUp:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)mouseMoved:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)mouseDragged:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollWheel:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 byDelta:(struct CGSize { double x0; double x1; })a2;
- (void)handleReloadData;

@end
