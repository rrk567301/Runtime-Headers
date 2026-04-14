@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)a0;

- (void)runDaemonSide;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (id)_argumentsDictionaryAsData:(id)a0;
- (id)_argumentsDictionaryFromXPCEvent:(id)a0;
- (void)_updateCloudSharedAlbumWithArgumentsDictionary:(id)a0 photoLibrary:(id)a1;
- (void)_updateSharedStreamCollectionShareWithArgumentsDictionary:(id)a0 photoLibrary:(id)a1;

@end
