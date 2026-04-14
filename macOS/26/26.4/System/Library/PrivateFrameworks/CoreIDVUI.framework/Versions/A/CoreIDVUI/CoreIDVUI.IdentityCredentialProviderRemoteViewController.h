@interface CoreIDVUI.IdentityCredentialProviderRemoteViewController : NSRemoteViewController <CoreIDVUI.IdentityCredentialProviderServiceDelegate> {
    void /* unknown type, empty encoding */ hostWindow;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithCoder:(id)a0;
- (void)dismiss;

@end
