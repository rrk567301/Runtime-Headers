@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (double)_aspectRatio;

@end
