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
    void /* unknown type, empty encoding */ _zoomRange;
    void /* unknown type, empty encoding */ supportedFeatureSet;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setContentVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)xpcHost_didBeginDrawing;
- (void)xpcHost_receiveFileBookmark:(id)a0;
- (void)xpcHost_receiveMulticastData:(id)a0;
- (void)xpcHost_receiveSelection:(id)a0;

@end
