@class NSURL;

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL *_fileURL;
}

- (void)dealloc;
- (id)init;
- (id)initWithFileURL:(id)a0;
- (id)colorsFromBacking;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)a0;
- (BOOL)writeColorsToBacking:(id)a0;

@end
