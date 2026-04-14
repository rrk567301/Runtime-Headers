@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryForceClientExitNotification;
- (void)_photoLibraryCorruptNotification;
- (id)init;
- (void)dealloc;

@end
