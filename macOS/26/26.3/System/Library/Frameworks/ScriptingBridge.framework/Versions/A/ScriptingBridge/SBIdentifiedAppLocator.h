@class NSString;

@interface SBIdentifiedAppLocator : SBAppLocator {
    NSString *_bundleIdentifier;
}

- (id)description;
- (id)bundleIdentifier;
- (id)path;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;

@end
