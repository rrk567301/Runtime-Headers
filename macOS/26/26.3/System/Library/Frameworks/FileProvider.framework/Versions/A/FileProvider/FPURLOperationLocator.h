@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (BOOL)isFolder;
- (id)initWithObject:(id)a0;
- (id)identifier;
- (id)description;
- (id)parentIdentifier;
- (unsigned long long)size;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)isExternalURL;
- (BOOL)requiresCrossDeviceCopy;

@end
