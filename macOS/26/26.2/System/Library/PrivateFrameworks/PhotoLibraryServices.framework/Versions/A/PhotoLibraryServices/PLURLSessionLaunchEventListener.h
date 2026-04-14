@class PLPhotoLibraryBundleController;

@interface PLURLSessionLaunchEventListener : NSObject

@property (nonatomic, readonly) PLPhotoLibraryBundleController *bundleController;

+ (id)sessionIdentifierFrom:(id)a0;

- (void).cxx_destruct;
- (id)initWithLibraryBundleController:(id)a0;
- (id)init;
- (void)handleBackgroundResourceUploaderLaunchEvent;
- (void)handleURLSessionLaunchEvent:(id)a0;
- (void)registerForLaunchEvents;
- (void)registerForNoOpURLSessionLaunchEvents;
- (void)registerForSimulatedBackgroundResourceUploaderLaunchEvent;
- (void)registerForURLSessionLaunchEvents;

@end
