@interface NFAosImapAccountProxy : NFIMAPAccountProxy

- (id)description;
- (id)password;
- (void)setPassword:(id)a0;
- (id)oneTimePassword;
- (id)clientInfo;
- (id)machineID;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (id)_anisetteData;
- (char)canAuthenticateWithScheme:(id)a0;
- (void)setSessionPassword:(id)a0;
- (char)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)a0 host:(id)a1 didPromptUser:(char *)a2;

@end
