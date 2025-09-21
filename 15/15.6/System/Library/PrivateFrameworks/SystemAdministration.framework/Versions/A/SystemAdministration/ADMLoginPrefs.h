@interface ADMLoginPrefs : NSObject

+ (id)sharedLoginPrefs;

- (char)_boolFromCFValue:(void *)a0;
- (char)setAutomaticLoginUser:(id)a0 password:(id)a1;
- (char)showListEnabled;
- (struct __CFBundle { } *)_loginFrameworkBundle;
- (int)_setAutoLoginPassword:(id)a0;
- (id)automaticLoginUser;
- (char)disableRestartShutdown;
- (char)isIMEnabled;
- (char)isVOEnabled;
- (id)loginAuthenticator;
- (long long)numberOfRetriesBeforeHintIsDisplayed;
- (char)otherUserEnabled;
- (void)setAutoLoginUser:(id)a0 password:(id)a1;
- (char)setAutomaticLoginUser:(id)a0 uid:(long long)a1 password:(id)a2;
- (void)setDisableRestartShutdown:(char)a0;
- (void)setGuestUserPassword:(id)a0 accountName:(id)a1;
- (void)setIMEnabled:(char)a0;
- (void)setLoginAuthenticator:(id)a0;
- (void)setNumberOfRetriesBeforeHintIsDisplayed:(long long)a0;
- (void)setShowHostname:(char)a0;
- (void)setVOEnabled:(char)a0;
- (char)showHostname;
- (void)showList:(char)a0;
- (void)showOtherUser:(char)a0;
- (void)syncLoginPrefs;

@end
