@class NSURL;

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL *_fileURL;
}

- (id)initWithFileURL:(id)a0;
- (void)dealloc;
- (id)init;
- (id)colorsFromBacking;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)a0;
- (BOOL)writeColorsToBacking:(id)a0;

@end
