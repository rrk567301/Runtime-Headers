@class NSString;

@interface ISApplicationIdentityIcon : ISConcreteIcon

@property (readonly, copy) NSString *identityString;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithApplicationIdentity:(id)a0;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (void).cxx_destruct;
- (unsigned long long)_personaType;
- (id)_resourceForPersona:(unsigned long long)a0;

@end
