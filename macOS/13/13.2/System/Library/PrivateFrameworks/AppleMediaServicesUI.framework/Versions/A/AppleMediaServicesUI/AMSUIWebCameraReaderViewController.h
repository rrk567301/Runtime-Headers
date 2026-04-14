@class AMSUIWebNavigationBarModel, NSString, AMSUIWebCameraReaderInfoView, AMSUIWebAppearance, NSDictionary, NSViewController, AMSUIWebClientContext, AMSUIWebCameraReaderPageModel;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUICodeRedeemerViewControllerDelegate, AMSUIWebPagePresenter>

@property (retain) AMSUIWebAppearance *appearance;
@property (retain) NSViewController *childController;
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
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (id)_cameraReader;
- (void)codeRedeemerDidDismiss:(id)a0;
- (void)codeRedeemer:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemer:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemer:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemerDidStart:(id)a0;
- (void)codeRedeemerDidFadeStatus:(id)a0;
- (void)codeRedeemerDidFindBox:(id)a0;
- (void)codeRedeemerWillFadeStatus:(id)a0;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;
- (void)_setChild:(id)a0;
- (void)_setupPage;
- (void)_setupInfoView;
- (void)_setupTextEntry;
- (void)_layoutPage;
- (void)_layoutHalfScreen;
- (void)_layoutFullScreen;
- (void)_layoutTextField;
- (void)_commitNavigationBarModel;
- (void)_setupNavigationModel;
- (void)_setupCameraToggle;
- (void)_setRedeemButton;
- (void)_setCameraToggleButton;
- (id)_outputForCreditCardReaderObjects:(id)a0;
- (void)_setupPageForCreditCard;
- (void)_setupPageForGiftCard;
- (id)_outputForGiftCardReaderObjects:(id)a0;
- (id)_outputForGiftCardReaderCode:(id)a0;
- (void)_setupPageForIDCard;
- (id)_outputForIDCardReaderObjects:(id)a0;
- (void)_applyAppearance;
- (id)_codeRedeemer;
- (void)_handleCameraOutput:(id)a0 error:(id)a1;

@end
