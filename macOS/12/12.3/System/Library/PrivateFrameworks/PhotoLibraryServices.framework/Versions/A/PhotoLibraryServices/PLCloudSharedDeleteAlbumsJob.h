@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete;
@property (retain, nonatomic) NSString *inviterAddress;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)a0;
+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)a0 inviterAddress:(id)a1;

- (void)run;
- (id)description;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;

@end
