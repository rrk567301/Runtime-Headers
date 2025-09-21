@interface ECExternalAuthScheme : ECAuthScheme

@property (class, readonly) ECExternalAuthScheme *externalAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
