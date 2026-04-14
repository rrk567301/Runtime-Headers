@interface BAManagedDownloaderExtensionInfo : BAAppExtensionInfo

@property (readonly) long long manifestDataSource;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithManifestDataSource:(long long)a0;

@end
