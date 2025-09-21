@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *mediaSources;
@property (retain, nonatomic) NSString *albumCloudGUID;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSArray *recipientsInfo;
@property (retain, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) BOOL unitTestingMode;
@property (nonatomic) BOOL executeSynchronously;

+ (id)cloudStreamShareJobToPublishMediaFromSources:(id)a0 toCollectionShareScopeIdentifier:(id)a1 withCommentText:(id)a2 clientBundleIdentifier:(id)a3 unitTestingMode:(BOOL)a4;
+ (void)publishMediaFromSources:(id)a0 toNewSharedAlbumWithName:(id)a1 withCommentText:(id)a2 recipients:(id)a3;
+ (void)publishMediaFromSources:(id)a0 toSharedAlbum:(id)a1 withCommentText:(id)a2 completionHandler:(id /* block */)a3;

- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (void)executeDaemonOperation;
- (void)addInfosForRecipients:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;

@end
