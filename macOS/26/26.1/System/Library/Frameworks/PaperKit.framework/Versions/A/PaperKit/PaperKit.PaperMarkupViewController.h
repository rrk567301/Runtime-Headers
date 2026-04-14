@interface PaperKit.PaperMarkupViewController : NSViewController <PaperKit.APIHostXPCProtocol> {
    void /* unknown type, empty encoding */ extensionProxy;
    void /* unknown type, empty encoding */ _xpcActor;
    void /* unknown type, empty encoding */ xpcContinuations;
    void /* unknown type, empty encoding */ _lastReportedSafeAreaInsets;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostDelegateProxy;
    void /* unknown type, empty encoding */ multicastConnection;
    void /* unknown type, empty encoding */ multicastTask;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _markup;
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ _isEditable;
    void /* unknown type, empty encoding */ _drawingTool;
    void /* unknown type, empty encoding */ _indirectPointerTouchMode;
    void /* unknown type, empty encoding */ _selection;
    void /* unknown type, empty encoding */ _contentVisibleFrame;
    void /* unknown type, empty encoding */ _extensionViewBounds;
    void /* unknown type, empty encoding */ _zoomRange;
    void /* unknown type, empty encoding */ _showsVerticalScrollIndicator;
    void /* unknown type, empty encoding */ _showsHorizontalScrollIndicator;
    void /* unknown type, empty encoding */ supportedFeatureSet;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)xpcHost_didBeginDrawing;
- (void)xpcHost_receiveFileBookmark:(id)a0;
- (void)xpcHost_receiveMulticastData:(id)a0;
- (void)xpcHost_receiveSelection:(id)a0;
- (void)xpcHost_setContentVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
