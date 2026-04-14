@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)name;
- (id)userInfo;
- (id)object;
- (void).cxx_destruct;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
