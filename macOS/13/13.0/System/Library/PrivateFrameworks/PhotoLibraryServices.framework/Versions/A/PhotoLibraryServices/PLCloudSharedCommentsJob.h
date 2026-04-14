@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray *msASComments;
@property (retain, nonatomic) NSString *commentGUID;
@property (retain, nonatomic) NSString *assetGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)publishCommentToServer:(id)a0;
+ (void)deleteSharedCommentFromServer:(id)a0;
+ (void)locallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3;
+ (void)assetsdLocallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;
+ (void)locallyProcessDeletedComments:(id)a0 info:(id)a1;

- (id)description;
- (void)run;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (BOOL)shouldArchiveXPCToDisk;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (void)executeDeleteCommentFromServer;

@end
