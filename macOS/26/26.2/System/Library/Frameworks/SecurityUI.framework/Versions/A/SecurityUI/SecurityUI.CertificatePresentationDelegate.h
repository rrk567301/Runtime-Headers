@interface SecurityUI.CertificatePresentationDelegate : NSObject <SFCertificatePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ currentWindow;
    void /* unknown type, empty encoding */ onDismiss;
}

- (void).cxx_destruct;
- (id)init;
- (void)certificatePresentationControllerDidDismiss:(id)a0;
- (id)presentationWindowForCertificatePresentationController:(id)a0;

@end
