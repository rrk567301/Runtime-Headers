@interface SBAppLocator : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _address;
    char _isCurrentProcess;
    unsigned int _launchFlags;
}

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)bundleIdentifier;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)address;
- (BOOL)isRunning;
- (BOOL)isCurrentProcess;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (void)resetAddress;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;
- (id)processInformation;
- (id)sdef;

@end
