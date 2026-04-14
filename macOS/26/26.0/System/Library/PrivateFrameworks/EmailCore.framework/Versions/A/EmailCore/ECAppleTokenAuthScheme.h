@interface ECAppleTokenAuthScheme : ECAuthScheme

@property (class, readonly) ECAppleTokenAuthScheme *appleTokenAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
