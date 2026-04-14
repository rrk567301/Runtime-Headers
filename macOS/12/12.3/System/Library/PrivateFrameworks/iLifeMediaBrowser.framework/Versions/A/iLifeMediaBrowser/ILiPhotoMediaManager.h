@interface ILiPhotoMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)modificationDate;
- (id)dictionaryWithAlbums:(id)a0;
- (id)dBasePath;
- (id)albumsInDictionary:(id)a0;
- (id)iPhotoApplicationVersion;
- (id)dictionaryWithPhotos:(id)a0;
- (id)photosInDictionary:(id)a0;
- (void)warningSupressor;

@end
