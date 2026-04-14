@interface ECAppleTokenAuthScheme : ECAuthScheme

@property (class, readonly) ECAppleTokenAuthScheme *appleTokenAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
