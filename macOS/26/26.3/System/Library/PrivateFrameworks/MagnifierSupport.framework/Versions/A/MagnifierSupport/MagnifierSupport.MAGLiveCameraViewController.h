@interface MagnifierSupport.MAGLiveCameraViewController : NSViewController {
    void /* unknown type, empty encoding */ liveCameraView;
    void /* unknown type, empty encoding */ captureService;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ analyzer;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)_analyzeImageWithNotification:(id)a0;
- (void)_updateImageBoundsWithNotification:(id)a0;
- (void)appearanceDidChangeCallback;
- (void)themeChangedOnMainThread;

@end
