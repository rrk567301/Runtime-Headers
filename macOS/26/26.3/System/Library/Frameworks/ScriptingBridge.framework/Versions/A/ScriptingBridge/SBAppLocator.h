@interface SBAppLocator : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _address;
    char _isCurrentProcess;
    unsigned int _launchFlags;
}

- (void)finalize;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)address;
- (id)description;
- (id)init;
- (id)bundleIdentifier;
- (id)path;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isRunning;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (BOOL)isCurrentProcess;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;
- (id)processInformation;
- (void)resetAddress;
- (id)sdef;

@end
