@interface ECExternalAuthScheme : ECAuthScheme

@property (class, readonly) ECExternalAuthScheme *externalAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)requiresUsername;
- (void)dealloc;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
