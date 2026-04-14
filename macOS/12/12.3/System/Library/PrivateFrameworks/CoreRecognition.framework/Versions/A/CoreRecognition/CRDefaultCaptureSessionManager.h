@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureInputPort, NSString, CALayer, AVCaptureVideoPreviewLayer, AVCaptureVideoDataOutput;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager>

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *avfPreviewLayer;
@property (retain, nonatomic) AVCaptureDeviceInput *deviceInput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *captureVideoDataOutput;
@property (retain) id inputPortFormatObserver;
@property (weak, nonatomic) AVCaptureInputPort *inputPortFormatSender;
@property float maxISO;
@property float minISO;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } highISOThresholdDuration;
@property BOOL exposureAdjustmentInProgress;
@property int exposureAdjustmentInProgressTimeoutCount;
@property BOOL runningManualExposure;
@property struct { struct *x0; int x1; double x2; double x3; } *exposure_table;
@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSString *cameraMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) long long focusMode;
@property (nonatomic) long long exposureMode;
@property (nonatomic) long long torchMode;
@property (weak) id<AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate;
@property (readonly, nonatomic) CALayer *previewLayer;
@property (retain) NSString *currentDeviceID;
@property BOOL enableMetadataOutput;
@property struct CGSize { double width; double height; } cameraResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)stopRunning;
- (void)startRunning;
- (BOOL)isAdjustingFocus;
- (BOOL)isFocusPointOfInterestSupported;
- (struct CGPoint { double x0; double x1; })focusPointOfInterest;
- (void)setupCameraSession;
- (int)targetVideoFormat;
- (void)teardownCameraSession;
- (BOOL)toggleCamera;
- (BOOL)switchToCameraWithDeviceID:(id)a0;
- (BOOL)switchToCamera:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewVisibleRect;
- (void)highISOAdjustExposure;
- (struct CGPoint { double x0; double x1; })convertCameraPoint:(struct CGPoint { double x0; double x1; })a0 toLayer:(id)a1;
- (BOOL)isPreviewVideoMirrored;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLayer:(id)a1;
- (struct CGPoint { double x0; double x1; })convertCameraPoint:(struct CGPoint { double x0; double x1; })a0 toLayer:(id)a1 flipped:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })convertCameraPointOCR:(struct CGPoint { double x0; double x1; })a0 toLayer:(id)a1 flipped:(BOOL)a2;
- (void)changeCameraConfiguration;
- (void)cacheCameraResolution:(id)a0;
- (id)captureDeviceWithPosition:(long long)a0;
- (void)setupCameraSessionWithCaptureDevice:(id)a0;
- (void)setupHighISO:(id)a0;
- (BOOL)isRearCamera;
- (id)captureDeviceWithIdentifier:(id)a0;
- (unsigned long long)cameraCount;
- (id)frontFacingCamera;
- (id)backFacingCamera;
- (struct CGPoint { double x0; double x1; })convertCameraPoint:(struct CGPoint { double x0; double x1; })a0 fromLayer:(id)a1;

@end
