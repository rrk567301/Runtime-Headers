@class NSString;

@interface SBFilePathAppLocator : SBAppLocator {
    NSString *_filePath;
    BOOL _isApplication;
}

- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFilePath:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;

@end
