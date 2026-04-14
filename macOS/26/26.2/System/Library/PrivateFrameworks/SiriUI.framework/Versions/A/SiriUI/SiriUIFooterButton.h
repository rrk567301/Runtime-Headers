@interface SiriUIFooterButton : SiriUIContentButton

+ (id)buttonWithRole:(unsigned long long)a0;

- (void)_commonInit;
- (void)setRole:(unsigned long long)a0;
- (void)setTextColor:(id)a0;
- (id)effectiveAppearance;
- (void)configureRoleForConfirmationOptions:(id)a0;

@end
