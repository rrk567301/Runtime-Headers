@interface CoreIDVUI.IdentityCredentialProviderRemoteViewController : NSRemoteViewController <CoreIDVUI.IdentityCredentialProviderServiceDelegate> {
    void /* unknown type, empty encoding */ hostWindow;
}

- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
