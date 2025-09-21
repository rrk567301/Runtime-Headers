@class PLPhotoLibrary, NSObject;
@protocol OS_dispatch_group;

@interface PLPhotosStateLog : NSObject {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (void)logDescription:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_logAssets:(id)a0 forAlbum:(id)a1 indent:(unsigned long long)a2;
- (char)compressFileFromPath:(id)a0 toPath:(id)a1;
- (char)copyFilesMatching:(id)a0 andExcluding:(id)a1 fromPath:(id)a2 toPath:(id)a3 usingCompression:(char)a4;
- (void)createSnapshot;
- (void)logAlbum:(id)a0 index:(unsigned long long)a1 indent:(unsigned long long)a2 completeMetadata:(char)a3 printAssets:(char)a4;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)logMoments;

@end
