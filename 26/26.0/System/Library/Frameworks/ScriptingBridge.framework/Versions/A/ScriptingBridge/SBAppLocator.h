@interface SBAppLocator : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _address;
    char _isCurrentProcess;
    unsigned int _launchFlags;
}

- (void)finalize;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)path;
- (id)init;
- (BOOL)isRunning;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)address;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (BOOL)isCurrentProcess;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;
- (id)processInformation;
- (void)resetAddress;
- (id)sdef;

@end
