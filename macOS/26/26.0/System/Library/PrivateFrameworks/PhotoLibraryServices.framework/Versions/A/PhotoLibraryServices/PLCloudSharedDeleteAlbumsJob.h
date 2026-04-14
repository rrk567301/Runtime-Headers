@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete;
@property (retain, nonatomic) NSString *inviterAddress;

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)a0 inviterAddress:(id)a1;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)a0;

- (void)runDaemonSide;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void).cxx_destruct;
- (long long)daemonOperation;

@end
