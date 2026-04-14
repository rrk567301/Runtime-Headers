@interface ADMLoginPrefs : NSObject

+ (id)sharedLoginPrefs;

- (struct __CFBundle { } *)_loginFrameworkBundle;
- (BOOL)_boolFromCFValue:(void *)a0;
- (int)_setAutoLoginPassword:(id)a0;
- (id)automaticLoginUser;
- (BOOL)setAutomaticLoginUser:(id)a0 password:(id)a1;
- (void)syncLoginPrefs;
- (id)loginAuthenticator;
- (void)setLoginAuthenticator:(id)a0;
- (long long)numberOfRetriesBeforeHintIsDisplayed;
- (void)setNumberOfRetriesBeforeHintIsDisplayed:(long long)a0;
- (BOOL)showHostname;
- (void)setShowHostname:(BOOL)a0;
- (BOOL)otherUserEnabled;
- (void)showOtherUser:(BOOL)a0;
- (BOOL)showListEnabled;
- (void)showList:(BOOL)a0;
- (BOOL)isVOEnabled;
- (void)setVOEnabled:(BOOL)a0;
- (BOOL)isIMEnabled;
- (void)setIMEnabled:(BOOL)a0;
- (BOOL)disableRestartShutdown;
- (void)setDisableRestartShutdown:(BOOL)a0;
- (void)setAutoLoginUser:(id)a0 password:(id)a1;
- (void)setGuestUserPassword:(id)a0 accountName:(id)a1;
- (BOOL)setAutomaticLoginUser:(id)a0 uid:(long long)a1 password:(id)a2;

@end
