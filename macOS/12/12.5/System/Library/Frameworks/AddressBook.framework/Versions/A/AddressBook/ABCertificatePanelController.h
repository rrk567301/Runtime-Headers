@class NSError;

@interface ABCertificatePanelController : NSObject {
    id /* block */ _completionHandler;
}

@property (retain) NSError *error;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (id)message;
- (struct __SecTrust { } *)trust;
- (id)cancelButtonTitle;
- (id)failingURL;
- (id)continueButtonTitle;
- (BOOL)isPresentableError;
- (id)certificatePanel;
- (void)certificateTrustSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)allowCertificate;

@end
