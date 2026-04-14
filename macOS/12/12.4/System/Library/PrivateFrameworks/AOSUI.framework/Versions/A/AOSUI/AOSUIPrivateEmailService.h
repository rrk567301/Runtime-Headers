@class AOSUIPrivateEmailController;

@interface AOSUIPrivateEmailService : MMService {
    AOSUIPrivateEmailController *_aosuiPrivateEmailController;
}

- (void).cxx_destruct;
- (id)displayName;
- (id)icon;
- (void)showMoreInfo:(id)a0;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)shouldHideEnableButton;

@end
