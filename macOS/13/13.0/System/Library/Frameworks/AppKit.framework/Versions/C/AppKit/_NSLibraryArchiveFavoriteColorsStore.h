@class NSURL;

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL *_fileURL;
}

- (void)dealloc;
- (id)init;
- (BOOL)writeColorsToBacking:(id)a0;
- (id)colorsFromBacking;
- (void)remoteColorsDidChange:(id)a0;
- (void)postDistributedNotification;
- (id)initWithFileURL:(id)a0;

@end
