@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryForceClientExitNotification;
- (id)init;
- (void)dealloc;
- (void)_photoLibraryCorruptNotification;

@end
