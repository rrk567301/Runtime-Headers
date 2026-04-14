@interface CoreIDVUI.IdentityCredentialProviderRemoteViewController : NSRemoteViewController <CoreIDVUI.IdentityCredentialProviderServiceDelegate> {
    void /* unknown type, empty encoding */ hostWindow;
}

- (void)dismiss;
- (id)exportedInterface;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
