@class SFCertificatePresentationRequest;
@protocol SFCertificateViewControllerDelegate;

@interface SFCertificateViewController : NSViewController

@property (retain, nonatomic) SFCertificatePresentationRequest *presentationRequest;
@property (weak, nonatomic) id<SFCertificateViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dismiss;
- (void)viewDidDisappear;
- (void)_viewDidDisappear;
- (id)initWithCertificatePresentationRequest:(id)a0;
- (void)layoutViewWithCertificatePresentationRequest:(id)a0;

@end
