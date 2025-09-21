@interface FPURLOperationLocator : FPActionOperationLocator {
    char _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (char)supportsSecureCoding;

- (id)description;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (id)filename;
- (char)isDownloaded;
- (char)isFolder;
- (id)parentIdentifier;
- (void)attachSandboxExtensionOnXPCEncoding;
- (char)isExternalURL;
- (char)requiresCrossDeviceCopy;

@end
