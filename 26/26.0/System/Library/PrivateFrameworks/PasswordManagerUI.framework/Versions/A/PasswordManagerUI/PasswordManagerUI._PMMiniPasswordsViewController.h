@interface PasswordManagerUI._PMMiniPasswordsViewController : NSViewController {
    void /* unknown type, empty encoding */ appState;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setExplicitAutoFillMode:(BOOL)a0;
- (void)setRemoteAppID:(id)a0;
- (void)setAutoFillMode:(unsigned long long)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;

@end
