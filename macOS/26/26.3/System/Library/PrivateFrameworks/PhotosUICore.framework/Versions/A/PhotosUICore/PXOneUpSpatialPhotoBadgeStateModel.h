@interface PXOneUpSpatialPhotoBadgeStateModel : NSObject

@property (class, nonatomic, readonly) BOOL shouldHideChrome;
@property (class, nonatomic, readonly) BOOL enabled;
@property (class, nonatomic, readonly) BOOL buttonToggledOn;

+ (void)enable;
+ (void)disable;
+ (void)toggle;
+ (void)checkAvailability;
+ (void)forceAnimation;
+ (id)notificationName3DBadgeToggled;

- (id)init;
- (void).cxx_destruct;

@end
