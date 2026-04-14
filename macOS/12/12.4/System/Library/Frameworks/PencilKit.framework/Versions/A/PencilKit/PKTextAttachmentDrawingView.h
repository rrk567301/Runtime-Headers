@class NSTimer, NSString, NSTextAttachment, PKMacLinedPaperView, PKDrawing, NSOperationQueue, PKImageRenderer, NSImage, PKLinedPaper;

@interface PKTextAttachmentDrawingView : NSView <PKTextAttachmentView, PKTextAttachmentDrawingViewLinedPaperSupport>

@property (nonatomic) struct CGSize { double width; double height; } currentImageSize;
@property (retain, nonatomic) NSOperationQueue *renderTileQueue;
@property (retain, nonatomic) NSTimer *redrawTimer;
@property (retain, nonatomic) PKImageRenderer *tileRenderer;
@property (retain, nonatomic) PKMacLinedPaperView *linedPaperView;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSImage *liveResizeImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveResizeImageDrawingFrame;
@property (nonatomic) BOOL currentModeIsDarkMode;
@property (weak, nonatomic) NSTextAttachment *textAttachment;
@property (retain, nonatomic) PKLinedPaper *linedPaper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToSuperview;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_textView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (long long)_characterIndex;
- (id)tiles;
- (id)initWithAttachment:(id)a0 drawingClass:(Class)a1 inserted:(BOOL)a2;
- (BOOL)isDarkModeEnabled;
- (void)updateLinedPaperView;
- (void)_invalidateTiles;
- (void)_updateTiles;
- (void)_triggerRedraw;
- (void)updateFrameForTextContainer;
- (double)drawingAspectRatio;
- (void)_updateAttachmentBounds;
- (void)_createTilesIfNecessary;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fromViewTransform;
- (BOOL)isLiveResizing;
- (void)_recreateTiles;
- (void)_scheduleTilesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_purgeTilesOutsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scheduleRenderingForTile:(id)a0;
- (double)drawingScaleFactor;
- (void)_redraw;
- (void)_textClipViewDidChange;
- (void)_textViewDidChangeSize;
- (void)_textStorageDidProcessEditing;
- (void)_liveResizeWillStart;
- (void)_liveResizeDidEnd;
- (void)drawingDataDidChange:(id)a0;
- (id)dataForTextAttachment:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })drawingToViewTransform;
- (id /* block */)linedPaperRenderBlockForTile:(id)a0;

@end
