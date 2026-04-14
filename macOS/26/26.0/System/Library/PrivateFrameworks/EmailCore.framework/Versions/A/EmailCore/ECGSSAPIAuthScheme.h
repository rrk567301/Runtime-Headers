@interface ECGSSAPIAuthScheme : ECAuthScheme

@property (class, readonly) ECGSSAPIAuthScheme *gssapiAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
