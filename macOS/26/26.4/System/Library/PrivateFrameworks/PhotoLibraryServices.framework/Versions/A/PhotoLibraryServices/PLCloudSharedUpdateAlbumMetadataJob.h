@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)a0;

- (void)run;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)_argumentsDictionaryAsData:(id)a0;
- (id)_argumentsDictionaryFromXPCEvent:(id)a0;
- (void)_updateCloudSharedAlbumWithArgumentsDictionary:(id)a0 photoLibrary:(id)a1;
- (void)_updateSharedStreamCollectionShareWithArgumentsDictionary:(id)a0 photoLibrary:(id)a1;

@end
