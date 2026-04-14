@class NSError;

@interface ABCertificatePanelController : NSObject {
    id /* block */ _completionHandler;
}

@property (retain) NSError *error;

- (void).cxx_destruct;
- (long long)runModal;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)message;
- (struct __SecTrust { } *)trust;
- (id)cancelButtonTitle;
- (id)failingURL;
- (void)certificateTrustSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)isPresentableError;
- (void)allowCertificate;
- (id)continueButtonTitle;
- (id)certificatePanel;

@end
