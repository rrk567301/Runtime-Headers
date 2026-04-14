@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryCorruptNotification;
- (void)dealloc;
- (id)init;
- (void)_photoLibraryForceClientExitNotification;

@end
