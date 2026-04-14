@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureDevice;

@interface RPPipViewController : NSViewController

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void)loadView;
- (void)dealloc;
- (void)viewDidAppear;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithPosition:(long long)a0;
- (void)startPipSession;
- (void)setUpPipSession;
- (id)_pipView;
- (void)addSystemPreferredCameraObserver;
- (id)cameraWithPosition:(long long)a0;
- (void)configurePipSessionWithCameraPosition:(long long)a0;
- (void)removeSystemPrefferedCameraObserver;
- (void)stopPipSession;

@end
