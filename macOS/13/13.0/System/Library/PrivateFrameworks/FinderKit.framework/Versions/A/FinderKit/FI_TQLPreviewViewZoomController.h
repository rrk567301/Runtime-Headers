@class NSString, QLPreviewView;

@interface FI_TQLPreviewViewZoomController : NSObject <ISpawnOriginDelegateProtocol, TQLPreviewWindowControllerProtocol, QLSeamlessCloserDelegate> {
    QLPreviewView *_qlPreviewView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)window;
- (id)quickLookSharedPreviewView;
- (BOOL)quickLookHandleEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })globalZoomRectForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)zoomImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)isBackupBrowser;
- (id)seamlessCloserSourcePreviewViewForPreviewItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessCloserSourceFrameOnScreenForPreviewItem:(id)a0;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithPreviewView:(id)a0;

@end
