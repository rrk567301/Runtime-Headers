@interface CloudSubscriptionFeatures.Assets : NSObject

@property (class, nonatomic, readonly) BOOL assetsFinishedDownloading;
@property (class, nonatomic, readonly) BOOL userHasEnoughStorage;

- (id)init;

@end
