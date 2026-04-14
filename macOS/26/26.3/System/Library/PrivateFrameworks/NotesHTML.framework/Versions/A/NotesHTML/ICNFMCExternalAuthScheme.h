@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)externalAuthScheme;

- (id)name;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
