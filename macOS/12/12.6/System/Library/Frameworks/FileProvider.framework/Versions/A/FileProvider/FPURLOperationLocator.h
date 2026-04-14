@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)size;
- (id)description;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)filename;
- (BOOL)isDownloaded;
- (id)parentIdentifier;
- (BOOL)isFolder;
- (BOOL)isExternalURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)requiresCrossDeviceCopy;

@end
