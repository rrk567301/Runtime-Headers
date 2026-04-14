@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureDevice;

@interface RPPipViewController : NSViewController

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)initWithPosition:(long long)a0;
- (void)startPipSession;
- (void)stopPipSession;
- (id)cameraWithPosition:(long long)a0;
- (id)_pipView;
- (void)setUpPipSession;

@end
