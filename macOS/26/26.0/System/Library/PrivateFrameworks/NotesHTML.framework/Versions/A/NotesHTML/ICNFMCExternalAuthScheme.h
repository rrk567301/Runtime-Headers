@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)externalAuthScheme;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
