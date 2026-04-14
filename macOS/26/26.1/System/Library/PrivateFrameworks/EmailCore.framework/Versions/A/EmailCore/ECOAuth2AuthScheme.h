@interface ECOAuth2AuthScheme : ECAuthScheme

@property (class, readonly) ECOAuth2AuthScheme *oauth2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)requiresUsername;
- (void)dealloc;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
