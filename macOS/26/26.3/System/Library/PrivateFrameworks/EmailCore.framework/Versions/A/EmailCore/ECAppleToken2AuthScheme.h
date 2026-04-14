@interface ECAppleToken2AuthScheme : ECAuthScheme

@property (class, readonly) ECAppleToken2AuthScheme *appleToken2AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
