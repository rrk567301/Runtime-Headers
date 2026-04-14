@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)name;
- (id)object;
- (id)userInfo;
- (void).cxx_destruct;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
