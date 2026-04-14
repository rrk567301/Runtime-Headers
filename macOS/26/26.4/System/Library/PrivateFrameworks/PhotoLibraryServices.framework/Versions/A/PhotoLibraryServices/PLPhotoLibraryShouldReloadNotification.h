@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)name;
- (id)object;
- (void).cxx_destruct;
- (id)userInfo;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
