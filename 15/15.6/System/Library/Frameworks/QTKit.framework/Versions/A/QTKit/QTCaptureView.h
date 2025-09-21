@class NSString;

@interface QTCaptureView : NSView <QTImageConsumerDelegateHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFillColor:(id)a0;
- (void)setLayer:(id)a0;
- (id)_alteredImageForImage:(id)a0;
- (void)_applyDelegateHelperToRenderer;
- (void)_drawIBPreviewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCaptureViewDoesNeedLayoutOnMainThread;
- (void)_setCaptureViewNeedsLayout:(char)a0;
- (void)_updateRendererView;
- (void)_updateVideoPreviewConnectionFromVideoPreviewOutput;
- (id)availableVideoPreviewConnections;
- (id)captureSession;
- (void)formatDidChange:(id)a0;
- (char)preservesAspectRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewBounds;
- (void)setAvailableVideoPreviewConnections:(id)a0;
- (void)setCaptureSession:(id)a0;
- (void)setPreservesAspectRatio:(char)a0;
- (void)setVideoPreviewConnection:(id)a0;
- (id)videoPreviewConnection;

@end
