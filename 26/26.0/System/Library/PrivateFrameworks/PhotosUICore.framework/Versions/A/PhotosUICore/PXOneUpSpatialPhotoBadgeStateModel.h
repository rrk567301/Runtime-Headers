@interface PXOneUpSpatialPhotoBadgeStateModel : NSObject

@property (class, nonatomic, readonly) BOOL enabled;
@property (class, nonatomic, readonly) BOOL enabledOrDownloading;

+ (void)disable;
+ (void)enable;
+ (void)toggle;
+ (void)checkAvailability;
+ (id)notificationName3DBadgeToggled;

- (id)init;
- (void).cxx_destruct;

@end
