@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)_openSystemPhotoLibrary;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (id)initWithLibraryBundleController:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)_handleCloudPhotoNotification;

@end
