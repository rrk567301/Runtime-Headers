@class NSURL;

@interface WFFileCoder : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *sharedDirectory;
@property (copy, nonatomic) NSURL *sharedTemporaryDirectory;
@property (nonatomic) long long deletionResponsibility;
@property (nonatomic) long long targetPlatform;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)archiveFileAtURL:(id)a0 fileShouldBeDeletedOnDeallocation:(char)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileShouldBeDeletedOnDeallocation:(char *)a1 fileIsSecurityScoped:(char *)a2;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
