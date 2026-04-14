@class CRCameraReader, NSBox, NSArray, NSString;
@protocol PKPaymentCameraCaptureDelegate;

@interface PKPaymentCameraCaptureViewController : NSViewController <CRCameraReaderDelegate>

@property (retain, nonatomic) CRCameraReader *cameraReader;
@property (retain, nonatomic) NSBox *cameraReaderContainer;
@property (weak, nonatomic) id<PKPaymentCameraCaptureDelegate> delegate;
@property (retain, nonatomic) NSArray *outputObjects;
@property BOOL cameraReaderStarted;
@property BOOL hidePlacementText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)nibBundle;
- (void)viewDidLayout;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)beginCaptureWithDelegate:(id)a0;

@end
