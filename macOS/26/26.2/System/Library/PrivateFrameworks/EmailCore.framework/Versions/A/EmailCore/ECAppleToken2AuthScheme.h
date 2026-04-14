@interface ECAppleToken2AuthScheme : ECAuthScheme

@property (class, readonly) ECAppleToken2AuthScheme *appleToken2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
