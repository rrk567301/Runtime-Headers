@interface ICNFMCPlainAuthScheme : ICNFMCAuthScheme

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)plainAuthScheme;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSaslMechanisms;

@end
