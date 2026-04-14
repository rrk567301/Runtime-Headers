@class HDDaemon, HDCarouselServicesManager, HDHeartRateRecoveryManager, HDAlertSuppressor, HDCoreMotionWorkoutInterface, NSString, HDAppLauncher;

@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension>

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor;
@property (readonly, nonatomic) HDAppLauncher *appLauncher;
@property (readonly, nonatomic) HDCarouselServicesManager *carouselServicesManager;
@property (readonly, nonatomic) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (readonly, nonatomic) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;

@end
