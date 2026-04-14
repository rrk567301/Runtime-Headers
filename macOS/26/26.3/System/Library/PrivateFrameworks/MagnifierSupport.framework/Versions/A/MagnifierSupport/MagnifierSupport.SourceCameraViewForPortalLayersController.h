@class AVCaptureSession;

@interface MagnifierSupport.SourceCameraViewForPortalLayersController : NSViewController {
    void /* unknown type, empty encoding */ documentController;
    void /* unknown type, empty encoding */ previewCameraLayer;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ cameraChangedSubscription;
    void /* unknown type, empty encoding */ captureService;
}

@property (nonatomic, retain) AVCaptureSession *session;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;

@end
