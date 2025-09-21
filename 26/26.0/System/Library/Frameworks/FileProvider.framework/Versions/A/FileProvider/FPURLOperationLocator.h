@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFolder;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)isExternalURL;
- (BOOL)requiresCrossDeviceCopy;

@end
