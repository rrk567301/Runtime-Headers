@class PDFHUDLayerControllerPrivate;

@interface PDFHUDLayerController : NSObject {
    PDFHUDLayerControllerPrivate *_private;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)mouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setVisible:(BOOL)a0;
- (void)mouseUp:(id)a0;
- (void)setDeviceScaleFactor:(double)a0;
- (void)_setupLayer:(id)a0;
- (void)_redrawLayer;
- (id)_controlForEvent:(id)a0;
- (id)_layerForEvent:(id)a0;
- (void)_performActionForControl:(id)a0;
- (id)_getImageForControlName:(id)a0;
- (void)_loadIconImages;
- (BOOL)mouseIsInController:(id)a0;
- (id)initInLayer:(id)a0 withControlArray:(id)a1;
- (void)_setLayerColor:(double)a0;

@end
