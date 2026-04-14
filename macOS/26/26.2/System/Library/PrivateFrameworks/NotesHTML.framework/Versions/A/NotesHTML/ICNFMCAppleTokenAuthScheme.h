@interface ICNFMCAppleTokenAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)appleTokenAuthScheme;

- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
