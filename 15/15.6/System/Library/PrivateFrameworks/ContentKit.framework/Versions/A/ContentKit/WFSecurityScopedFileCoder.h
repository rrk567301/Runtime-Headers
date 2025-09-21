@interface WFSecurityScopedFileCoder : WFFileCoder

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sharedDirectory;
- (void)archiveFileAtURL:(id)a0 fileShouldBeDeletedOnDeallocation:(char)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileShouldBeDeletedOnDeallocation:(char *)a1 fileIsSecurityScoped:(char *)a2;
- (id)sharedTemporaryDirectory;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
