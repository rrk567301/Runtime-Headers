@interface _TtC17PasswordManagerUIP33_CDE307BFF3A004159382E3E6A0B2F3AD22PMLockedViewController : NSViewController <LAUIAuthenticationViewControllerDelegate> {
    void /* unknown type, empty encoding */ authenticationResultHandler;
    void /* unknown type, empty encoding */ cancelHandler;
    void /* unknown type, empty encoding */ submitPasswordSubscription;
    void /* unknown type, empty encoding */ delayFocus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authenticationViewController;
}

- (void)windowDidBecomeKey:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)cancelAuthentication;

@end
