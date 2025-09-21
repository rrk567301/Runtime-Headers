@class ICSelectorDelayer, NSProgressIndicator, NSImage, NSOperation;

@interface ICPDFAttachmentView : ICAttachmentView {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_page;
}

@property (weak, nonatomic) NSOperation *renderOperation;
@property (retain, nonatomic) NSProgressIndicator *progressView;
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer;
@property (nonatomic) char isManaullyGeneratingImage;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic, getter=isRendering) char rendering;
@property (readonly, nonatomic) char availableImageIsAcceptable;
@property (readonly, nonatomic) struct CGPDFPage { } *page;

+ (id)renderingQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityHelp;
- (void)setAttachment:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)startProgress;
- (void)setHighlightColor:(id)a0;
- (void)stopProgress;
- (char)cancelDidScrollIntoVisibleRange;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)pdfURL;
- (char)cancelRenderingIfPossible;
- (void)cleanupPDFDocument;
- (id)icaxTypeDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAttachment:(id)a1 textContainer:(id)a2 forManualRendering:(char)a3;
- (char)needToStartRender;
- (void)prepareForPrinting;
- (void)setupBorderForLayer:(id)a0;
- (void)startImageRenderIfNeeded;
- (void)updateLayerContentsWithFade:(char)a0;

@end
