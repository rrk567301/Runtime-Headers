@interface GTCaptureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char enablePresentDownload;
@property (nonatomic) char enableLogErrors;
@property (nonatomic) char disableHashResources;
@property (nonatomic) unsigned int waitEventTimeout;
@property (nonatomic) unsigned int maxDownloadCommandBuffers;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
