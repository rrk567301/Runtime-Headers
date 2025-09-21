@interface ICNFMCGssapiAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)gssApiAuthScheme;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
