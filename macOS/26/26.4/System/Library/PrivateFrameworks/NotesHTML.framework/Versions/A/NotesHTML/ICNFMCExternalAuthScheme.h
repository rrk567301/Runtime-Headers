@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)externalAuthScheme;

- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
