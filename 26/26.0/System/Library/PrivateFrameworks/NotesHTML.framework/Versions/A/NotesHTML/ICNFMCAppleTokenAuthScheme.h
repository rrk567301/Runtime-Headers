@interface ICNFMCAppleTokenAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)appleTokenAuthScheme;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
