@class PLPhotoLibraryBundle, PLLazyObject, PLCPLSettings;
@protocol PLCPLSettingsObserverDelegate;

@interface PLCPLSettingsObserver : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazySettings;
}

@property (readonly) PLCPLSettings *settings;
@property (weak) id<PLCPLSettingsObserverDelegate> delegate;

- (id)initWithSettings:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)setPrefetchMode:(long long)a0 error:(id *)a1;
- (BOOL)isCloudPhotoLibraryEnabled;
- (void).cxx_destruct;
- (void)dealloc;

@end
