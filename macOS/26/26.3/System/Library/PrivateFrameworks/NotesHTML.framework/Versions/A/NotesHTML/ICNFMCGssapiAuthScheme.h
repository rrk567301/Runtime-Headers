@interface ICNFMCGssapiAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)gssApiAuthScheme;

- (id)name;
- (BOOL)requiresPassword;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
