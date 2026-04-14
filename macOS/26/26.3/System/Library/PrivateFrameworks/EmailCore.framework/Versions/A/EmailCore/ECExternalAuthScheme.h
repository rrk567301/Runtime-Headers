@interface ECExternalAuthScheme : ECAuthScheme

@property (class, readonly) ECExternalAuthScheme *externalAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
