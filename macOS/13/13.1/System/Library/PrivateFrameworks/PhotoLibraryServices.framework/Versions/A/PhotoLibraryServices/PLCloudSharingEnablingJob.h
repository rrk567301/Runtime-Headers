@interface PLCloudSharingEnablingJob : PLCloudSharingJob

@property (nonatomic) BOOL enableSharing;

+ (void)enableCloudSharing:(BOOL)a0 withPathManager:(id)a1;
+ (void)disableCloudSharingWithLibraryServicesManager:(id)a0;
+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)a0 keepPendingAlbums:(BOOL)a1 withReason:(id)a2;

- (id)description;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (BOOL)shouldArchiveXPCToDisk;

@end
