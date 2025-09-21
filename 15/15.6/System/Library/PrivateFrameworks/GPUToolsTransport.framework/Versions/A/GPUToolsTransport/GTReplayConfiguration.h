@interface GTReplayConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char forceLoadActionClear;
@property (nonatomic) char forceLoadUnusedResources;
@property (nonatomic) char forceWaitUntilCompleted;
@property (nonatomic) char disableOptimizeRestores;
@property (nonatomic) char disableHeapTextureCompression;
@property (nonatomic) char enableStopOnError;
@property (nonatomic) char enableDisplayOnDevice;
@property (nonatomic) char enableReplayFromOtherPlatforms;
@property (nonatomic) char enableValidation;
@property (nonatomic) char enableCapture;
@property (nonatomic) char enableHUD;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
