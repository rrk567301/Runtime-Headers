@class NSImageView, NSString, ICTrackedParagraph, NSTrackingArea, NSColor;
@protocol ICTodoButtonDragDelegate;

@interface ICTodoButton : NSButton <NSGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (nonatomic) BOOL trackedParagraphIsRTL;
@property (retain) NSImageView *undoneImageView;
@property (retain) NSImageView *doneImageView;
@property (retain) NSTrackingArea *cursorTrackingArea;
@property (nonatomic, getter=isDone) BOOL done;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (copy, nonatomic) NSColor *highlightColor;
@property (nonatomic) double zoomFactor;
@property (weak, nonatomic) id<ICTodoButtonDragDelegate> dragDelegate;
@property (nonatomic) struct CGSize { double width; double height; } defaultSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)updateTintColor;
- (void)accentColorDidChange;
- (BOOL)panGestureRecognizerIsWithinThreshold:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForImage;
- (void)updateImagesAnimated:(BOOL)a0;
- (void)didPan:(id)a0;
- (void)wasPressed;
- (void)trackedParagraphDidChange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftToRight:(BOOL)a1;
- (void)setDone:(BOOL)a0 animated:(BOOL)a1;

@end
