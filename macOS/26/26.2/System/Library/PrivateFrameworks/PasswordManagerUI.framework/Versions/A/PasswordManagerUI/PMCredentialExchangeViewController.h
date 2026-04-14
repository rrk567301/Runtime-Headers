@interface PMCredentialExchangeViewController : ASExportViewController {
    void /* unknown type, empty encoding */ viewDidCancel;
}

@property (nonatomic, readonly) BOOL didLaunchDestinationApp;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)initWithExportedCredentialData:(id)a0 exporterBundleID:(id)a1;

@end
