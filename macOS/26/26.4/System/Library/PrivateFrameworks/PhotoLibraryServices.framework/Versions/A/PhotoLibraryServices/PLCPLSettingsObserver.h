@class PLPhotoLibraryBundle, PLLazyObject, PLCPLSettings;
@protocol PLCPLSettingsObserverDelegate;

@interface PLCPLSettingsObserver : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazySettings;
}

@property (readonly) PLCPLSettings *settings;
@property (weak) id<PLCPLSettingsObserverDelegate> delegate;

- (BOOL)isCloudPhotoLibraryEnabled;
- (BOOL)setPrefetchMode:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithLibraryBundle:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)dealloc;

@end
