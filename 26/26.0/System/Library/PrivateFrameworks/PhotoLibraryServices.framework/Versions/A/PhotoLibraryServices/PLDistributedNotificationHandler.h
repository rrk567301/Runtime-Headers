@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)registerForNotifications;
- (void)_handleNotification:(id)a0;
- (void)_openSystemPhotoLibrary;
- (void)_handleCloudPhotoNotification;
- (id)initWithLibraryBundleController:(id)a0;
- (void).cxx_destruct;

@end
