@interface ICNFMCGssapiAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)gssApiAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (char)requiresPassword;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
