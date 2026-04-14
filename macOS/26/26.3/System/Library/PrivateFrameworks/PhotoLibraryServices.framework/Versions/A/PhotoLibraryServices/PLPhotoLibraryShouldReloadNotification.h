@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)object;
- (id)name;
- (void).cxx_destruct;
- (id)userInfo;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
