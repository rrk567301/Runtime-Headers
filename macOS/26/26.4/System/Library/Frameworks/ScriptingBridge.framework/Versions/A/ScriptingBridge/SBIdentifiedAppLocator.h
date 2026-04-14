@class NSString;

@interface SBIdentifiedAppLocator : SBAppLocator {
    NSString *_bundleIdentifier;
}

- (id)initWithBundleIdentifier:(id)a0;
- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void)dealloc;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;

@end
