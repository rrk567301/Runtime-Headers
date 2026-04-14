@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureDevice;

@interface RPPipViewController : NSViewController

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)initWithPosition:(long long)a0;
- (id)cameraWithPosition:(long long)a0;
- (void)configurePipSessionWithCameraPosition:(long long)a0;
- (void)setUpPipSession;
- (void)startPipSession;
- (void)stopPipSession;
- (id)_pipView;
- (void)addSystemPreferredCameraObserver;
- (void)removeSystemPrefferedCameraObserver;

@end
