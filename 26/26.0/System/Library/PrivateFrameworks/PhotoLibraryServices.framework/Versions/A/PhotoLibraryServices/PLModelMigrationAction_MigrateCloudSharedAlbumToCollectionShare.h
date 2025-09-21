@class NSProgress, NSString;

@interface PLModelMigrationAction_MigrateCloudSharedAlbumToCollectionShare : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;
+ (void)insertParticipantForCloudSharedAlbumInvitationRecord:(id)a0 collectionShare:(id)a1 personInfoManager:(id)a2 moc:(id)a3;

- (id)_insertCollectionShareForCloudSharedAlbum:(id)a0 moc:(id)a1;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
