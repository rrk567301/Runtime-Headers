@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)object;
- (id)name;
- (id)userInfo;
- (void).cxx_destruct;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
