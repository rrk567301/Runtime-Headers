@interface WebArchiveSharingControllerObjCAdapter : NSObject {
    BOOL _registeredForDidLaunchApplicationNotification;
}

@property (readonly, nonatomic) void *controller;

+ (id)mailAppBundleIdentifier;

- (void)dealloc;
- (id)initWithWebArchiveSharingController:(void *)a0;
- (void)registerForDidLaunchApplicationNotification;
- (void)_didLaunchApplication:(id)a0;

@end
