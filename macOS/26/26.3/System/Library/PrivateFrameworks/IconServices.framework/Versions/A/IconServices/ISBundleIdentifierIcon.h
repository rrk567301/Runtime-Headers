@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)description;
- (double)_aspectRatio;
- (void).cxx_destruct;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)makeSymbolResourceProvider;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
