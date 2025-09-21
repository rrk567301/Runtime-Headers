@class NSArray, PLPhotoLibrary, PLManagedAlbum, NSPersistentStoreCoordinator, PLManagedObjectContext;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob

@property (copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PLManagedAlbum *album;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;

+ (void)replaceAssets:(id)a0 withCameraRollCopiesInAlbum:(id)a1;

- (void)runDaemonSide;
- (void)dealloc;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (id)_cameraRollAssetDerivedFromAsset:(id)a0;

@end
