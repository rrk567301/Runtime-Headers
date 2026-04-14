@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (double)_aspectRatio;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
