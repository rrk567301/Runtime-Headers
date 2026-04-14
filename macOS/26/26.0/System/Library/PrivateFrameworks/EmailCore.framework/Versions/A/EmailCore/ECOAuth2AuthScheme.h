@interface ECOAuth2AuthScheme : ECAuthScheme

@property (class, readonly) ECOAuth2AuthScheme *oauth2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
