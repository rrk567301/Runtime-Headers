@interface ECOAuth2AuthScheme : ECAuthScheme

@property (class, readonly) ECOAuth2AuthScheme *oauth2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (char)requiresPassword;
- (unsigned int)applescriptScheme;
- (char)requiresUsername;
- (id)supportedSASLMechanisms;

@end
