@class NSString, MPMediaLibrary;

@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMediaLibrary *sharedLibrary;
@property (class, readonly, nonatomic) NSString *libraryDidChangeNotificationName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endGeneratingLibraryChangeNotifications;
- (void)beginGeneratingLibraryChangeNotifications;
- (id)_initWithUnderlyingMediaLibrary:(id)a0;
- (void)_handlelibraryDidChangeNotification:(id)a0;

@end
