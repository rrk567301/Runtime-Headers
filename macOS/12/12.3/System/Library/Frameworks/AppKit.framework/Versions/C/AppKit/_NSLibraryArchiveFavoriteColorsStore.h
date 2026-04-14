@class NSURL;

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL *_fileURL;
}

- (void)dealloc;
- (id)init;
- (id)colorsFromBacking;
- (BOOL)writeColorsToBacking:(id)a0;
- (void)remoteColorsDidChange:(id)a0;
- (void)postDistributedNotification;
- (id)initWithFileURL:(id)a0;

@end
