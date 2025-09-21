@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)externalAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (char)requiresPassword;
- (unsigned int)applescriptScheme;
- (char)requiresUsername;
- (id)supportedSaslMechanisms;

@end
