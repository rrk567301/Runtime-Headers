@class AMSUIWebNavigationBarModel, NSString, AMSUIWebCameraReaderInfoView, AMSUIWebAppearance, NSDictionary, CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderPageModel;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUIWebPagePresenter>

@property (retain) AMSUIWebAppearance *appearance;
@property (retain) CRCameraReader *cameraController;
@property (retain) AMSUIWebClientContext *context;
@property (retain) AMSUIWebCameraReaderInfoView *infoView;
@property (retain) AMSUIWebCameraReaderPageModel *model;
@property (retain) AMSUIWebNavigationBarModel *navigationBarModel;
@property (retain) NSDictionary *output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)_applyAppearance;
- (void)_setupPage;
- (void)_layoutPage;
- (void)_setupPageForCreditCard;
- (void)_setupPageForGiftCard;
- (void)_setupPageForIDCard;
- (void)_setupInfoView;
- (void)_setupNavigationModel;
- (void)_commitNavigationBarModel;
- (void)_layoutHalfScreen;
- (void)_setCameraToggleButton;
- (void)_handleCameraOutput:(id)a0 error:(id)a1;
- (id)_outputForCreditCardReaderObjects:(id)a0;
- (id)_outputForIDCardReaderObjects:(id)a0;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;
- (void)_setupTextEntry;
- (void)_layoutFullScreen;
- (void)_layoutTextField;
- (void)_setupCameraToggle;
- (void)_setRedeemButton;
- (id)_outputForGiftCardReaderObjects:(id)a0;
- (id)_outputForGiftCardReaderCode:(id)a0;

@end
