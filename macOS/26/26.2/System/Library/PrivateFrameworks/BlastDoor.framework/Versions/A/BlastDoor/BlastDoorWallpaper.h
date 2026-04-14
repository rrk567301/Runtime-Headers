@class NSString, BlastDoorWallpaper_WallpaperMetadata, NSData, BlastDoorWallpaper_WallpaperImage;

@interface BlastDoorWallpaper : NSObject {
    void /* unknown type, empty encoding */ wallpaper;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *posterArchive;
@property (nonatomic, readonly) NSString *highResFileName;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperImage *highResImage;
@property (nonatomic, readonly) NSString *lowResFileName;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperImage *lowResImage;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
