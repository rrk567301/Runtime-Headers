@class CALayer, NSString, NSTimer, NSTrackingArea, NSDraggingSession, NSImage, CPKCharactersSectionView;
@protocol NSDraggingSource, CPKMouseEventDelegate, NSPasteboardWriting;

@interface CPKDraggableView : NSView <NSDraggingSource, CPKSelectable> {
    BOOL _selected;
    CALayer *_highlightLayer;
}

@property (retain, nonatomic) NSTimer *hoveringTimer;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) struct CGPoint { double x; double y; } draggingOrigin;
@property (retain, nonatomic) NSDraggingSession *draggingSession;
@property (readonly, nonatomic) NSImage *draggingImage;
@property (readonly, nonatomic) id<NSPasteboardWriting> pasteboardWriter;
@property (weak, nonatomic) CPKCharactersSectionView *sectionView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } draggingFrame;
@property (nonatomic) double highlightGap;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) id<CPKMouseEventDelegate> mouseEventDelegate;
@property (weak, nonatomic) id<NSDraggingSource> dragSourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL selected;

- (id)accessibilityLabel;
- (void)mouseEntered:(id)a0;
- (void)mouseDown:(id)a0;
- (void)updateLayer;
- (void)mouseExited:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityDescription;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)mouseDragged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilityValueDescription;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)wantsLayer;
- (void)hideTooltip;
- (id)tooltipString;
- (void)startHoveringTimerWithDuration:(double)a0;
- (BOOL)displayAsPlainText;
- (void)drawContentsForImageWithOuterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 innerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)pasteboardItemFont;
- (id)pasteboardItemString;
- (void)showTooltip;
- (void)stopHoveringTimer;
- (BOOL)wantsLayerUpdate;

@end
