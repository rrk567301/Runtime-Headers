@class NSArray, NSString;
@protocol CertificateSheetViewControllerDelegate;

@interface CertificateSheetViewController : NSObject {
    NSArray *_certificateChain;
    NSString *_evCertificateOrganizationName;
    NSString *_hostName;
    struct RetainPtr<__SecTrust *> { void *m_ptr; } _serverTrust;
}

@property (weak, nonatomic) id<CertificateSheetViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_certificateTrustSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_showCertificateSheetWithHostname:(id)a0 cerficiateChain:(id)a1 evCertificateOrganizationName:(id)a2 inWindow:(id)a3;
- (id)initWithBrowserViewController:(id)a0;
- (id)initWithCertificateChain:(id)a0 evCertificateOrganizationName:(id)a1 hostName:(id)a2 serverTrust:(struct __SecTrust { } *)a3;
- (void)showCertificateSheetInWindow:(id)a0;

@end
