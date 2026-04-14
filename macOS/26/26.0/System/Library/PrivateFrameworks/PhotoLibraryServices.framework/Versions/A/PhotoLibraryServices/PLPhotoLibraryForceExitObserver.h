@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryForceClientExitNotification;
- (void)_photoLibraryCorruptNotification;
- (void)dealloc;
- (id)init;

@end
