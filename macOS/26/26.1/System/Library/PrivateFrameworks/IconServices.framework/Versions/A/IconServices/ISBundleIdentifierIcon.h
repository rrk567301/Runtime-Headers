@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (double)_aspectRatio;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)makeResourceProvider;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)makeSymbolResourceProvider;

@end
