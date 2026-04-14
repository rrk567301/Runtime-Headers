@interface SBAppLocator : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _address;
    char _isCurrentProcess;
    unsigned int _launchFlags;
}

- (BOOL)isRunning;
- (void)finalize;
- (id)name;
- (id)path;
- (void)encodeWithCoder:(id)a0;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)address;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void)dealloc;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (BOOL)isCurrentProcess;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;
- (id)processInformation;
- (void)resetAddress;
- (id)sdef;

@end
