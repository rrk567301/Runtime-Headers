@interface ASCredentialRequestSecurityKeyViewController : ASCredentialRequestBasicPaneViewController

- (id)initWithPresentationContext:(id)a0;
- (id)initWithPreferredIcon:(long long)a0 mode:(long long)a1 serviceName:(id)a2 serviceType:(unsigned long long)a3 overrideTitle:(id)a4 overrideSubtitle:(id)a5;
- (id)initWithPreferredIcon:(long long)a0 mode:(long long)a1 serviceName:(id)a2 serviceType:(unsigned long long)a3 presentingError:(long long)a4;
- (id)initWithPreferredIcon:(long long)a0 mode:(long long)a1 serviceName:(id)a2 serviceType:(unsigned long long)a3 presentingError:(long long)a4 overrideTitle:(id)a5 overrideSubtitle:(id)a6 overrideNoCredentialsErrorTitle:(id)a7 overrideNoCredentialsErrorMessage:(id)a8;
- (id)initWithPreferredIcon:(long long)a0 mode:(long long)a1 serviceName:(id)a2 serviceType:(unsigned long long)a3 reinsertSecurityKey:(BOOL)a4;
- (id)initWithPreferredIcon:(long long)a0 title:(id)a1 subtitle:(id)a2;
- (id)initWithPresentationContext:(id)a0 presentingError:(long long)a1;
- (id)initWithPresentationContext:(id)a0 reinsertSecurityKey:(BOOL)a1;

@end
