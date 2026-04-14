@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (double)_aspectRatio;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (void).cxx_destruct;

@end
