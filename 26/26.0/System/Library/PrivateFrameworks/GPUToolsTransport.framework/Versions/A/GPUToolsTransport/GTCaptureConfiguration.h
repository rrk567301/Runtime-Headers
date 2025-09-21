@interface GTCaptureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enablePresentDownload;
@property (nonatomic) unsigned int presentDownloadSize;
@property (nonatomic) BOOL enableLogErrors;
@property (nonatomic) BOOL disableHashResources;
@property (nonatomic) unsigned int waitEventTimeout;
@property (nonatomic) unsigned int maxDownloadCommandBuffers;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
