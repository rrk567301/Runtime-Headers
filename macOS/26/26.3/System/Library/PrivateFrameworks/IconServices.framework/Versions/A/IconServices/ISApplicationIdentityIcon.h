@class NSString;

@interface ISApplicationIdentityIcon : ISConcreteIcon

@property (readonly, copy) NSString *identityString;

+ (BOOL)supportsSecureCoding;

- (id)initWithApplicationIdentity:(id)a0;
- (id)makeResourceProvider;
- (id)description;
- (void).cxx_destruct;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)makeSymbolResourceProvider;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_personaType;
- (id)_resourceForPersona:(unsigned long long)a0;

@end
