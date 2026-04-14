@class NSProgress, NSString;

@interface PLModelMigrationAction_FixMultipleCurrentUserOwnerShareParticipantsOnCollectionShares : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (void)updateTargetParticipant:(id)a0 duplicateParticipant:(id)a1 collectionShare:(id)a2 managedObjectContext:(id)a3;

@end
