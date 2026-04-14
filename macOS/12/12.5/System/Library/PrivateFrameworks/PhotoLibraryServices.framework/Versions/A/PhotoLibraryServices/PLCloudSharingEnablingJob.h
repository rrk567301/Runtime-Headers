@interface PLCloudSharingEnablingJob : PLCloudSharingJob

@property (nonatomic) BOOL enableSharing;

+ (void)enableCloudSharing:(BOOL)a0 withPathManager:(id)a1;
+ (void)disableCloudSharingWithLibraryServicesManager:(id)a0;
+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)a0 keepPendingAlbums:(BOOL)a1 withReason:(id)a2;

- (void)run;
- (id)description;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (BOOL)shouldArchiveXPCToDisk;

@end
