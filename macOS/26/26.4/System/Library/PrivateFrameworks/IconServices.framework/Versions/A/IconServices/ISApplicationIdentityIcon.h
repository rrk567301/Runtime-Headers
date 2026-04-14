@class NSString;

@interface ISApplicationIdentityIcon : ISConcreteIcon

@property (readonly, copy) NSString *identityString;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)makeSymbolResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationIdentity:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_personaType;
- (id)_resourceForPersona:(unsigned long long)a0;

@end
