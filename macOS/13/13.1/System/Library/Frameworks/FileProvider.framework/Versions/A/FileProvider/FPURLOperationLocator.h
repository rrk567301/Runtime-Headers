@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)size;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)identifier;
- (id)filename;
- (BOOL)isDownloaded;
- (BOOL)isFolder;
- (id)parentIdentifier;
- (BOOL)isExternalURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)requiresCrossDeviceCopy;

@end
