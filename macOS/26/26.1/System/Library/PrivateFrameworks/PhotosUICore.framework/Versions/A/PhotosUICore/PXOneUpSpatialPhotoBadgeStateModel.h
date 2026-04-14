@interface PXOneUpSpatialPhotoBadgeStateModel : NSObject

@property (class, nonatomic, readonly) BOOL shouldHideChrome;
@property (class, nonatomic, readonly) BOOL enabled;
@property (class, nonatomic, readonly) BOOL buttonToggledOn;

+ (void)disable;
+ (void)enable;
+ (void)toggle;
+ (void)checkAvailability;
+ (void)forceAnimation;
+ (id)notificationName3DBadgeToggled;

- (void).cxx_destruct;
- (id)init;

@end
