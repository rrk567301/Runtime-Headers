@interface ECOAuth2AuthScheme : ECAuthScheme

@property (class, readonly) ECOAuth2AuthScheme *oauth2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
