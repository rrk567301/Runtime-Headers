@class NSString;

@interface SBIdentifiedAppLocator : SBAppLocator {
    NSString *_bundleIdentifier;
}

- (id)initWithBundleIdentifier:(id)a0;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)path;
- (id)description;
- (id)initWithCoder:(id)a0;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;

@end
